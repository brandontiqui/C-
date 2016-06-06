/** @file ListP.cpp
 *  ADT list - Pointer-based implementation. */

#include <iostream>
#include <cstddef>		// for NULL
#include <new>			// for bad_alloc
#include "ListP.h"		// header file

using namespace std;

/********************************
 * Constructors and destructor: *
 ********************************/

List::List() : size(0), head(NULL)
{
} // end default constructor

List::List(const List& aList) : size(aList.size)
{
	if (aList.head == NULL)
		head = NULL; // original list is empty

	else
	{	// copy first node
		head = new ListNode;
		head->item = aList.head->item;

		// copy rest of list
		ListNode *newPtr = head; // new pointer
		// newPtr points to last node in new list
		// origPtr points to nodes in original list
		for (ListNode *origPtr = aList.head->next; origPtr != NULL; origPtr = origPtr->next)
		{	
			newPtr->next = new ListNode;
			newPtr = newPtr->next;
			newPtr->item = origPtr->item;
		} // end for

		newPtr->next = NULL;
	} // end if
} // end copy constructor

List::~List()
{
	while (!isEmpty())
		remove(1);
} // end destructor

/********************
 * List operations: *
 ********************/

bool List::isEmpty() const
{
	return size == 0;
} // end IsEmpty

int List::getLength() const
{
	return size;
} // end getLength

List::ListNode *List::find(int index) const
{
	if ( (index < 1) || (index > getLength()) )
		return NULL;

	else // count from the beginning of the list
	{
		ListNode *cur = head;
		for (int skip = 1; skip < index; ++skip)
			cur = cur->next;
		return cur;
	} // end if
} // end find

void List::retrieve(int index, ListItemType& dataItem) const
	throw(ListIndexOutOfRangeException)
{
	if ((index < 1) || (index > getLength()))
		throw ListIndexOutOfRangeException(
		"ListIndexOutOfRangeException:retrieve index out of range");
	else
	{	// get pointer to node, then data in node
		ListNode *cur = find(index);
		dataItem = cur->item;
	}	// end if
}   // end retrieve

void List::insert(int index, const ListItemType& newItem)
	throw(ListIndexOutOfRangeException, ListException)
{
	int newLength = getLength() + 1;

	if ( (index < 1) || (index > newLength) )
		throw ListIndexOutOfRangeException("ListIndexOutOfRangeException: insert index out of range");

	else
	{   // Create a new node and place newItem in it.
		try // Try to allocate memory.
		{
			ListNode *newPtr = new ListNode;
			size = newLength;
			newPtr->item = newItem;

			// Attach new node to the list.
			if (index == 1)
			{	// Insert new node at beginning of list.
				newPtr->next = head;
				head = newPtr;
			}
			else
			{
				ListNode *prev = find(index - 1);
				// Insert new node after node to which prev points.
				newPtr->next = prev->next;
				prev->next = newPtr;
			} // end if
		}
		catch (bad_alloc e)
		{
			throw ListException ("ListIndexOutOfRangeException: insert cannot allocate memory.");
		} // end try
	} // end if
} // end insert

void List::remove(int index) throw(ListIndexOutOfRangeException)
{
	ListNode *cur;

	if ( (index < 1) || (index > getLength()) )
		throw ListIndexOutOfRangeException(
		"ListIndexOutOfRangeException: remove index out of range");
	else
	{
		--size;
		if (index == 1)
		{	// delete the first node from the list
			cur = head; // save pointer to node
			head = head->next;
		}

		else
		{	
			ListNode *prev = find(index - 1);
			// delete the node after the node to which prev points
			cur = prev->next; // save pointer to node
			prev->next = cur->next;
		} // end if

		// return node to system
		cur->next = NULL;
		delete cur;
		cur = NULL;
	} // end if
} // end remove

void List::copy(const List& aList)
// --------------------------------------------------------------------------
// Preconditions: aList is set to a List object.
// Postconditions: aList is copied to the List object.
// --------------------------------------------------------------------------
{
	if (aList.head == NULL)
		head = NULL; // original list is empty

	else
	{	// copy first node
		head = new ListNode;
		head->item = aList.head->item;

		// copy rest of list
		ListNode *newPtr = head; // new pointer
		// newPtr points to last node in new list
		// origPtr points to nodes in original list
		for (ListNode *origPtr = aList.head->next; origPtr != NULL; origPtr = origPtr->next)
		{	
			newPtr->next = new ListNode;
			newPtr = newPtr->next;
			newPtr->item = origPtr->item;
		} // end for

		newPtr->next = NULL;
	} // end if
} // end copy

void List::displayNumber() 
// --------------------------------------------------------------------------
// Preconditions: none.
// Postconditions: The List object is written to standard output.
// --------------------------------------------------------------------------
{
	ListItemType dataItem;
	int i = getLength();
	for (i; i > 0; i--)
	{
		retrieve(i, dataItem);
		cout << dataItem;
	}
	cout << endl;
} // end displayNumber

void List::increment(int& i)
// --------------------------------------------------------------------------
// Preconditions: i is set to a value of 1.
// Postconditions: The List object is incremented by 1.
// --------------------------------------------------------------------------
{
	ListItemType dataItem;
	retrieve(i, dataItem);
	if (dataItem >= 0 && dataItem <= 8) 
	{
		remove(i);
		insert(i, ++dataItem);
	}
	else if (dataItem == 9 && i < getLength())
	{
		remove(i);
		insert(i, 0);
		increment(++i);
		--i;
	}
	else if (dataItem == 9 && i == getLength())
	{
		remove(i);
		insert(i, 0);
		insert(++i, 1);
		--i;	// reset i to 1
	}
} // end increment

void List::sum(const List& aList)
// --------------------------------------------------------------------------
// Preconditions: aList is set to a List object.
// Postconditions: The List object contains the sum of itself and aList.
// --------------------------------------------------------------------------
{
	int a = 1;
	int cNum = convert(aList);
	for (int i = 0; i < cNum; i++)
		increment(a);
} // end sum

int List::convert(const List& aList)
// --------------------------------------------------------------------------
// Preconditions: aList is set to a List object.
// Postconditions: The integer value of aList is returned.
// --------------------------------------------------------------------------
{	
	int num = 0;
	
	ListItemType dataItem;
	for (int i = aList.getLength(); i > 0; i--)
	{
		aList.retrieve(i, dataItem);
		
		int multiplier = 1;
		for (int j = 0; j < i - 1; j++)
		{
			multiplier *= 10;
		}
		num += dataItem * multiplier;
	}
	return num;
} // end convert





