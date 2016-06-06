/** Inserts a new node at the beginning of a doubly linked list.
 * @pre head points to the start of the list. newPtr is set to the new node 
 *      to be inserted.
 * @post a new node is inserted into the start of the list 
 * @param head The head of the list.
 * @param newPtr The new node to be inserted. */
void insert (node * head, node * newPtr)
{
	// list is empty
	if (head == NULL)
	{
		head = newPtr;
		newPtr->Next = NULL;
		newPtr->Previous = NULL;
	}
	
	// list is not empty
	else
	{
		newPtr->Next = head;
		head->Previous = newPtr;
		newPtr->Previous = NULL;
		head = newPtr;
	}
	// end if
} // end function insert