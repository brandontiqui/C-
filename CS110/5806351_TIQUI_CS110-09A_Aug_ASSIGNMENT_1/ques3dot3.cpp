/*****************************************************
* @author: Brandon Tiqui                             *
* @date  : 08.23.09                                  *
* Question 3.3: ques3dot3.cpp                        *
* Displays the highest and average of three numbers. *
* Average is set to two decimal places               *
******************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
// function main begins program execution
int main()
{
	// initialization phase
	double aNum; // contains current number
	double highestNum; // holds highest number
	double total = 0.0; // total of all numbers entered
	int counter = 1; // counter and current number to enter
	int maxNumbers = 3; // set to desired number of numbers
	
	// processing phase
	cout << "Enter " << maxNumbers << " numbers.\n"; 
	while( counter <= maxNumbers ) 
	{
		cout << "Enter number " << counter << ": "; // prompt for number
		cin >> aNum; // store number in aNum
		if( counter == 1 ) 
			highestNum = aNum; // set first number to highest number
		else if( aNum > highestNum ) // compare aNum to highestNum
			highestNum = aNum; // store aNum in highestNum if it is the higher number of the two
		total += aNum; // add aNum to total
		counter++; // increment counter
	}

	// termination phase
	cout << "The highest number is: " << highestNum
	   << "\nThe average is       : " << setprecision( 2 ) << fixed << total / maxNumbers << endl;
	return 0; // indicate successful completion
} // end main