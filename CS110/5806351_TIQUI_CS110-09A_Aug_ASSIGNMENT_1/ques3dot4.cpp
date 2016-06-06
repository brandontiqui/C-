/**************************************
* @author: Brandon Tiqui              *
* @date  : 08.23.09                   *
* Question 3.4: ques3dot4.cpp         *
* Determines if number is odd or even *
***************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{
	int aNum;
	cout << "If you enter a decimal number only the integer will be used. " // prompt the user for an integer
		    "\nEnter a number from the set of integers (Z): ";	
	cin  >> aNum; // store number in aNum
	
	// determine if number is odd or even
	if( aNum % 2 == 0 )
		cout << aNum << " is even." << endl; // output that number is even
	else
		cout << aNum << " is odd." << endl; // output that number is odd

	return 0; // indicate successful completion
} // end main