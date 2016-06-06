/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.08.09                     *
 * Question 6.7: ques6dot7.cpp           * 
 * Swaps two integers or two doubles.    *
 *****************************************/
#include <iostream>
using namespace std;

void swap ( int &, int & );
void swap ( double &, double &);

// function begins program execution
int main ()
{
	// test swap integers
	int x = 3;
	int y = 5;
	cout << "x = " << x << " before swap."
		"\ny = " << y << " before swap." << endl;
	swap ( x, y );
	cout << "x = " << x << " after swap."
		"\ny = " << y << " after swap.\n\n\n" << endl;

	// test swap doubles
	double a = 1.41;
	double b = 3.14;
	cout << "a = " << a << " before swap."
		"\nb = " << b << " before swap." << endl;
	swap ( a, b );
	cout << "a = " << a << " after swap."
		"\nb = " << b << " after swap." << endl;

	return 0; // indicate successful termination
} // end main

// swaps two integer values
void swap ( int &intA, int &intB )
{
	int temp = 0;
	temp = intA;
	intA = intB;
	intB = temp;
} // end function swapInteger

// swaps two double values
void swap ( double &doubA, double &doubB)
{
	double temp = 0.0;
	temp = doubA;
	doubA = doubB;
	doubB = temp;
} // end function swapDoubles
