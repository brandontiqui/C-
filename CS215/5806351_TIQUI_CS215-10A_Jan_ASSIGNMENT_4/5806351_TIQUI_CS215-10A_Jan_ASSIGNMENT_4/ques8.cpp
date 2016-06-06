/**
 * @pre : h is set to the root of the tree
   @post: returns the number of leaves in the tree * 
                                                  **/
int count (link h)
{
	if (h == 0)
		return 1; 
	return count(h->l) + count(h->r);
} // end function count