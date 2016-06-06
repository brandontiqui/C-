#include <iostream>
using namespace std;

#include "ListP.h"	

int main ()
{
	// Create number and test the displayNumber function.
	cout << "Test of the displayNumber function." << endl;
	cout << "The output of the displayNumber function should be 15." << endl;
	List aList;
	ListItemType dataItem;
	aList.insert(1, 5);		
	aList.insert(2, 1);	
	cout << "The output of the displayNumber function is: ";
	aList.displayNumber();
	cout << endl;
	
	// Test of the increment function.
	cout << "Test of the increment function." << endl;
	cout << "The result of the increment function should be 16." << endl;
	cout << "The result of the increment function is: ";
	int a = 1;
	aList.increment(a);
	aList.displayNumber();
	cout << endl;
	
	cout << "Incrementing to a value of 19 . . ." << endl;
	aList.increment(a);
	aList.increment(a);
	aList.increment(a);
	cout << "The result of the increment function is: ";
	aList.displayNumber();
	cout << endl;

	cout << "Incrementing to a value of 20 . . ." << endl;
	aList.increment(a);
	cout << "The result of the increment function is: ";
	aList.displayNumber();
	cout << endl;

	cout << "Incrementing to a value of 21 . . ." << endl;
	aList.increment(a);
	cout << "The result of the increment function is: ";
	aList.displayNumber();
	cout << endl;

	// Create new number.	
	cout << "Creating a new number . . ." << endl;
	List cList;
	cList.insert(1, 1);
	cList.insert(2, 5);
	cout << "The new number is : ";
	cList.displayNumber();
	cout << endl;

	// Test of the copy function.
	cout << "Test of the copy function." << endl;
	cout << "Copying 21 to the new number . . ." << endl;
	cList.copy(aList);
	cout << "The result of the copy function is: ";
	aList.displayNumber();
	cout << endl;

	// Create new number.	
	cout << "Creating a new number . . ." << endl;
	List bList;
	bList.insert(1, 8);
	bList.insert(2, 7);
	cout << "The new number is : ";
	bList.displayNumber();
	cout << endl;
	
	// Test of the sum function.
	cout << "Test of the sum function." << endl;
	cout << "Calculating the sum of 21 and 78 . . ." << endl;
	aList.sum(bList);
	cout << "The result of the sum function should be 99." << endl;
	cout << "The result of the sum function is: ";
	aList.displayNumber();
	cout << endl;

	// Test of the increment function.
	cout << "Test of the increment function." << endl;
	cout << "The result of the increment function should be 100." << endl;
	cout << "The result of the increment function is: ";
	aList.increment(a);
	aList.displayNumber();
	cout << endl;

	return 0;
} // end function main