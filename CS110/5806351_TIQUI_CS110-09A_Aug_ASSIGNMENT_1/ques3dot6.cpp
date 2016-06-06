/**********************************************************
* @author: Brandon Tiqui                                  *
* @date  : 08.23.09                                       *
* Question 3.6: ques3dot6.cpp                             *
* Determines and displays the number of matches of        *
* an integer's value in relation to its entered position. *
***********************************************************/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{
	// initialization phase
	double aNum; // contains current number
	int counter = 1; // counter and current number to enter
	int maxNumbers = 10; // set to desired number of numbers
	int matches = 0; // number of matches
	
	// processing phase
	cout << "Enter " << maxNumbers << " numbers.\n"; 
	while( counter <= maxNumbers ) 
	{
		cout << "Enter number " << counter << ": "; // prompt for number
		cin >> aNum; // store number in aNum
		if( aNum == counter ) 
			matches++; // increment matches
		counter++; // increment counter
	}

	// termination phase
	cout << "The number of matches is: " << matches << endl;

	return 0; // indicate successful completion
} // end main