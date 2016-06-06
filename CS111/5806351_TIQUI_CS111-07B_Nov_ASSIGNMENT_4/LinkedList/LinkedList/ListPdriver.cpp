#include <iostream>
using namespace std;

#include "ListP.h"	

int main ()
{
	// Create list.
	List aList;
	ListItemType dataItem;
	aList.insert(1, 10);				
	aList.insert(2, 99); // largest			    
	aList.insert(3, 3);	// smallest 
	aList.insert(4, 17);
	aList.insert(5, 51);

	// Test findSmallest function
	aList.findSmallest(dataItem);
	cout << "The smallest number in the list should be 3." << endl;
	cout << "The result of the findSmallest function is: " << dataItem << endl << endl;
	
	// Test findLargest function
	aList.findLargest(dataItem);
	cout << "The largest number in the list should be 99." << endl;
	cout << "The result of the findLargest function is: " << dataItem << endl << endl;
	
	// Test findAverage function
	cout << "The average of the numbers in the list should be 36." << endl;
	cout << "The result of the findAverage function is: " << aList.findAverage() << endl << endl;

	return 0;
}