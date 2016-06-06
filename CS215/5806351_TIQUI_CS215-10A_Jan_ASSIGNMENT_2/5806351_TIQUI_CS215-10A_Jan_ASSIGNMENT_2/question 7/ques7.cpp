/**
 * implementation
 **********/
#include <iostream>
using namespace std;

#include "ques7.h"

Newstring::Newstring()
{
	//head = NULL;
	createList();
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

void Newstring::concatenate(Newstring addString)
{
	Node *curB = addString.head;
	while (curB->item != '.')
    {
        concatenate(curB->item);
		curB = curB->next;
	}
} // end function concatenate(Newstring *)

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
} // end function createList
