/*********************************************************
* @author: Brandon Tiqui                                 *
* @date  : 08.23.09                                      *
* Question 3.2: ques3dot2.cpp                            * 
* Computes the water and sewage bill based on the number * 
* of gallons of water consumed.                          *
**********************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed; // ensures that decimal point is displayed

#include <iomanip> // paramaterized stream manipulators
using std::setprecision; // sets numeric output precision

// function main begins program execution
int main()
{
	//initialization phase
	const double waterRate    = 0.21;
	const double sewageRate   = 0.01;
	double gallonsWater = 0.00;

	// processing phase
	// prompt the user for the number of gallons of water consumed
	cout << "Enter the number of gallons of water: ";
	cin >> gallonsWater;
	
	// reprompt the user if data entry is a negative value
	while ( gallonsWater < 0 )
	{
		cout << "Error! Invalid entry (negative values are prohibited). "
			"\nEnter the number of gallons of water: ";
		cin >> gallonsWater;
	}
	
	// termination phase
	// display message with water and sewage service costs fixed to two decimal places
	cout << "Water  Bill: $" << setprecision( 2 ) << fixed << waterRate * gallonsWater 
		<< "\nSewage Bill: $" << sewageRate * gallonsWater << endl;
	return 0; // indicate successful termination
} // end main