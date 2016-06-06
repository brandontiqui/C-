/** Inserts a new node at the beginning of a singly linked list with a dummy 
 *  head node.	
 * @pre head points to the start of the list. newPtr is set to the new node 
 *      to be inserted.
 * @post a new node is inserted into the start of the list 
 * @param head The head of the list.
 * @param newPtr The new node to be inserted. */
void insert (node * head, node * newPtr) 
{
	// list is empty
	if (head->Next == NULL)
	{
		newPtr->Next = NULL;
		head->Next = newPtr;	
	}

	// list is not empty
	else
	{
		newPtr->Next = head->Next;
		newPtr->Previous = head->Next->Previous;
		head->Next->Previous = newPtr;
		head->Next = newPtr;
	}
	// end if
} // end function insert