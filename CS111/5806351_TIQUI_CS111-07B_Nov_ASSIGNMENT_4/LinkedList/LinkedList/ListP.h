/** @file ListP.h */
//a
#include "ListException.h"
#include "ListIndexOutOfRangeException.h"
typedef int ListItemType; // modified for list of integers

/** ADT list - Pointer-based implementation. */
class List
{
public:
// Constructors and destructor:

	/** Default constructor. */
	List();

	/** Copy constructor.
	 * @param aList The list to copy. */
	List(const List& aList);

	/** Destructor. */
	~List();

// List operations:
	bool isEmpty() const;
	int getLength() const;
	void insert(int index, const ListItemType& newItem)
		throw(ListIndexOutOfRangeException, ListException);
	void remove(int index)
		throw(ListIndexOutOfRangeException);
	void retrieve(int index, ListItemType& dataItem) const
		throw(ListIndexOutOfRangeException);

	void findSmallest(ListItemType& dataItem) const;
	void findLargest(ListItemType& dataItem) const;
	double findAverage() const;
	void insertSorted(int& i, int index, const ListItemType& newItem)
		throw(ListIndexOutOfRangeException, ListException);
	int List::retrieveSorted(int& index, const ListItemType& dataItem) const
		throw(ListIndexOutOfRangeException);

private:
	struct ListNode			// A node on the list.
	{
		ListItemType item;	// A data item on the list.
		ListNode	*next;	// Pointer to next node
	}; // end ListNode

	int			size; // Number of items in list.
	ListNode   *head; // Pointer to linked list of items.

	/** Locates a specified node in a linked list.
	 * @pre index is the number of the desired node.
	 * @post None.
	 * @param index The index of the node to locate.
	 * @return A pointer to the index-th node.  If index < 1
	 *		   or index > the number of nodes in the list,
	 *		   returns NULL. */
	ListNode *find(int index) const;
	
}; // end List
// End of header file.