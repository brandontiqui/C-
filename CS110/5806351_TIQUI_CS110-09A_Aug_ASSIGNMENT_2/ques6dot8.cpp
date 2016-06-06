/*********************************
 * @author: Brandon Tiqui        * 
 * @date  : 09.08.09             *
 * Question 6.8: ques6dot8.cpp   * 
 * Demonstrates use of template. *
 *********************************/
#include <iostream>
using namespace std;

template < class T >
T swap ( T &valueA, T &valueB )
{
	T temp;
	temp = valueA;
	valueA = valueB;
	valueB = temp;
} // end function template swap

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

