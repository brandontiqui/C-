// @author: Brandon Tiqui
// @date  : August 23, 2009
// Question 1.3: ques1dot3.cpp
// Displays the sum of five input values.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// initialization and declaration phase
	double aNumber; // declare aNumber
    double total = 0; // initialize total
	int numCounter = 1; // initialize numCounter

	// processing phase
	while ( numCounter <= 5 ) // loop 5 times
	{
		cout << "Enter a number: "; // prompt the user to enter a number
		cin >> aNumber; // input a number
		total += aNumber; // add aNumber to total, store result
		++numCounter; // increment counter by 1
	} // end while
	
	// termination phase
	cout << "\nThe total is  : " << total << endl; // display total 

	return 0; // indicate successful termination
} // end main