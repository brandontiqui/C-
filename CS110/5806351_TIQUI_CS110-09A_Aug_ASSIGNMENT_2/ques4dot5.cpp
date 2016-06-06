/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.06.09                     *
 * Question 4.5: ques4dot5.cpp           * 
 * Calculates and displays weekly pay.   *
 *****************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double pay = 0.0;

void calculateWage ( double hoursWorked, double hourlyWage );

// function begins program execution
int main()
{
	double hours;
	double wage;

	char choice;
	
	do
	{	
		cout << static_cast< int > ( 'y' );
		cout << "Enter the number of hours you worked in a week: ";
		cin >> hours;
		cout << "Enter the hourly wage: ";
		cin >> wage;
		calculateWage ( hours, wage );
		cout << "The weekly pay is: $" << pay << endl;
		cout << "Is there more data to be calculated (y/n)?: ";
		cin >> choice;
	} while ( choice == 'y');
	return 0; // indicate successful termination
} // end main

void calculateWage ( double hoursWorked, double hourlyWage )
{
	double fullTimeHours     = 40.0;
	double timeAndHalfHours  = 50.0;
	double timeAndHalfFactor =  1.5;
	double doubleTimeFactor  =  2.0;
	
	// hours worked is greater than time-and-a-half
	if ( hoursWorked > timeAndHalfHours )
		pay += ( fullTimeHours * hourlyWage )
			+ ( timeAndHalfHours - fullTimeHours ) * hourlyWage * timeAndHalfFactor
			+ ( hoursWorked - timeAndHalfHours ) * hourlyWage * doubleTimeFactor;
	
	// hours worked is greater than full-time and less than time-and-a-half
	else if ( ( hoursWorked > fullTimeHours ) && ( hoursWorked <= timeAndHalfHours ) )
	{
		pay += ( fullTimeHours * hourlyWage )
			+ ( hoursWorked - fullTimeHours ) * hourlyWage * timeAndHalfFactor;
	}

	// hours worked is at full-time or less
	else 
		pay += hoursWorked * hourlyWage;
}