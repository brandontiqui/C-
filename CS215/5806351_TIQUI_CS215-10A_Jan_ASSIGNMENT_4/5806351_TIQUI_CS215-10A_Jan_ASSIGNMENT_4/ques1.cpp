 int findLargest (ListNode *p)
// --------------------------------------------------------------------------
// Preconditions: list head pointer is passed as a parameter.
// Postconditions: returns the largest value in the linked list.
// --------------------------------------------------------------------------
{
	int default = -999;
	if (p->item != NULL)
	{ // list is not empty
		int current = p->item; 
		int next;

		if (p->next == NULL) // no more items on list
			return current;
		else // there are more item(s) on the list
			next = findLargest(p->next);

		if (current > next)
			return current;
		else
			return next;
	}
	else //list is empty
		return default; // value indicates an empty list
} // end function findLargest
