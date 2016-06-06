#include <iostream>
using namespace std;

#include "ListP.h"	

int main ()
{
	int num;
	int b = 0;
	List aList;
	List bList;
	ListItemType dataItem;
	
	/******************************
	 * Test insertSorted function *
	 ******************************/
	// Create list.
	int i = 1; // list index
	do
	{
		cout << "Enter a number to be inserted followed by the 'Enter' key or '0' to end: ";
		cin >> num;
		bList.insertSorted(b, i, num);
		b = 0; // lock reset
	}
	while (num != 0);
	cout << endl;

	// Display list.
	cout << "The list is: ";
	for (i = 1; i <= bList.getLength(); i++)
	{
		bList.retrieve(i, dataItem);
	    cout << dataItem << " ";
	}
	cout << endl << endl;

	/********************************
	 * Test retrieveSorted function *
	 ********************************/
	i = 1; // list index
	do
	{
		cout << "Enter a number to be retrieved followed by the 'Enter' key or '0' to end: ";
		cin >> num;
		if (num == 0)
			cout << "Have a good day!";
		else if (bList.retrieveSorted(i, num) < 0) // not in the list
			cout << num << " is not in the list";
		else 
			cout << num << " is at position " << bList.retrieveSorted(i, num);
		cout << endl << endl;
		i = 1; // reset index to beginning of the list
	}
	while (num != 0);

	return 0;
}