/************************************************
* @author: Brandon Tiqui                        *
* @date  : 08.23.09                             *
* Question 3.5: ques3dot5.cpp                   *
* Determines if number is positive or negative. *
* Terminates when '0' is entered.               *
*************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{
	double aNum;
	cout << "Enter a number from the set of integers (Z) or '0' to end: ";	
	cin  >> aNum; // store number in aNum
	
	// determine if number is positive or negative
	while( aNum != 0 )
	{	
		if( aNum > 0 )
			cout << aNum << " is positive." << endl; // output that number is positive
		else
			cout << aNum << " is negative." << endl; // output that number is negative
		cout << "Enter a number from the set of integers (Z) or '0' to end: ";
		cin >> aNum;
	}

	// termination message
	cout << "Thank you for playing!" << endl;
	
	return 0; // indicate successful completion
} // end main