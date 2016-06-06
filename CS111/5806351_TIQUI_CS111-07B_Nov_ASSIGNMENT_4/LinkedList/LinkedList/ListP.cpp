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

void List::findSmallest(ListItemType& dataItem) const
// --------------------------------------------------------------------------
// Preconditions: dataItem is set to a ListItem object.
// Postconditions: dataItem is set to the smallest item in the list.
// --------------------------------------------------------------------------
{
	int index = 1;
	ListNode *cur = find(index);
	dataItem = cur->item;
	if (getLength() > 1)
	{
		while (index < getLength())
		{
			index++;
			cur = find(index);
			if (cur->item < dataItem)
				dataItem = cur->item;
		} // end while
	}
} // end findSmallest

void List::findLargest(ListItemType& dataItem) const
// --------------------------------------------------------------------------
// Preconditions: dataItem is set to a ListItem object.
// Postconditions: dataItem is set to the largest item in the list.
// --------------------------------------------------------------------------
{
	int index = 1;
	ListNode *cur = find(index);
	dataItem = cur->item;
	if (getLength() > 1)
	{
		while (index < getLength())
		{
			index++;
			cur = find(index);
			if (cur->item > dataItem)
				dataItem = cur->item;
		} // end while
	}
} // end findLargest

double List::findAverage() const
// --------------------------------------------------------------------------
// Preconditions: none.
// Postconditions: The average of the numbers in the list is calculated and
//                 returned.
// --------------------------------------------------------------------------
{
	double total = 0.0;
	int index = 1;
	ListNode *cur = find(index);
	total = cur->item;
	if (getLength() > 1)
	{
		while (index < getLength())
		{
			index++;
			cur = find(index);
			total += cur->item;
		} // end while
	}
	return total / getLength();

} // end findAverage

// precondition: i has 0 and index has value of 1
void List::insertSorted(int& i, int index, const ListItemType& newItem)
	throw(ListIndexOutOfRangeException, ListException)
{
	ListItemType anotherItem;
	if (newItem > 0 && index <= getLength())
	{
		if (getLength() == 0)
			insert(index, newItem); // first item to be placed into list
		else 
		{	// compare to next item 
			retrieve(index, anotherItem);
			if (newItem > anotherItem)
			{
				index++;
				insertSorted(i, index, newItem); // recurse
			}
			for (i; i < 1; i++) // executes one time
				insert(index, newItem);
		}
	}
} // end insertSorted

// pass in 1 for index parameter to search from beginning of list
int List::retrieveSorted(int& index, const ListItemType& dataItem) const
	throw(ListIndexOutOfRangeException)
{
	ListNode *cur = find(index);
	if (cur == NULL) // item is not in list
		index = -1; 
	else if (cur->item != dataItem) // if item is not found
		retrieveSorted(++index, dataItem);
	return index;
}   // end retrieve

