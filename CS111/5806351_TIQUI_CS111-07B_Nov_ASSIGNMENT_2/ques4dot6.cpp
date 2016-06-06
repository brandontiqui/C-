/**
 * implementation
 **********/
#include <iostream>
using namespace std;

#include "ques4dot6.h"

Newstring::Newstring()
{
	head = NULL;
}

void Newstring::inputChar( char c)
{
    Node *cur = head;
	c = getchar();
    while ( c != '.' )
    {
        cur->next = new Node;                             
        cur->next->item = c;
        cur = cur->next;
        c = getchar();
    } 
    cur->next = new Node; // dot signals end of list                              
    cur->next->item = c;
	c = getchar(); // clear the new line 
} 

void Newstring::display()
{
    Node *cur = head;
	if(cur == NULL)
        cout << "empty" <<endl;
    else
    {
        while (cur->item != '.')
        {
			cout << cur->item;
            cur = cur->next;
        }
    }
	cout << endl;
} // end function display

int Newstring::length()
{
	Node *cur = head;
	int numChars = 0;
	while (cur->item != '.')
    {
		++numChars;
        cur = cur->next;
	}
	return numChars;
} // end function length

void Newstring::concatenate(char b)
{
	Node *cur = head;
	while (cur->item != '.')
    {
        cur = cur->next;
	}
	cur->item = b;
	cur->next = new Node;                             
	cur->next->item = '.';		// dot signals end of list
} // end function concatenate(char)

void Newstring::concatenate(Newstring theString)
{
	Node *curB = theString.head;
	while (curB->item != '.')
    {
        concatenate(curB->item);
		curB = curB->next;
	}
} // end function concatenate(Newstring *)

bool Newstring::substring(Newstring theString)
{
	bool status = false;
	Node *curB = theString.head;
	Node *cur = head;
	while ( (curB->item != '.') && (cur->item != '.') )
    {
        if ( (curB->item) == (cur->item) ) // if letter in substring is found
		{
			curB = curB->next; // point to next character in substring
		}
		cur = cur->next; // point to next character in prospective superstring
	}
	if (curB->item == '.') // substring is found
		status = true;
	return status;
} // end function substring

void Newstring::createList()
{
	char c;
    c = getchar();
    if ( c != '.' )
    {
        head = new Node;
        head->item = c;
        inputChar(c);
    }
}

