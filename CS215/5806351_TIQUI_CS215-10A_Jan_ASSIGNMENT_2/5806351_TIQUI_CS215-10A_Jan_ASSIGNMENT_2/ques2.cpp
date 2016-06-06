#include <iostream>
using namespace std;

// function begins program execution
int main()
{
	struct node;
	typedef node * ptrType;
	struct node
	{  
        int Data;
        ptrType Next;
	};
	
	// Create three nodes.
	ptrType P = new node;
	ptrType Q = new node;
	ptrType R = new node;

	// Assign values 1,2 and 3 to each node respectively.
	P->Data = 1;
	Q->Data = 2;
	R->Data = 3;

	// Link the nodes together in a list.
	ptrType head = P;
	P->Next = Q;
	Q->Next = R;
	R->Next = NULL;

	// Traverse the list and display each value.
	while (head->Next != NULL)
	{
		cout << head->Data << endl;
		head = head->Next;
	}
	cout << head->Data << endl;
	
	return 0; // indicates successful completion
} // end function main