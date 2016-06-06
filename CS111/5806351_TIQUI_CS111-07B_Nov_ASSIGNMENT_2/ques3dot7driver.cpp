/**
 * driver
 **********/
#include <iostream>
using namespace std;

#include "ques3dot7.h"

// pre: polynomial must have degree of 3 or higher to accommodate current test values
// function begins program execution
int main ()
{
	Polynomial myPoly;
	myPoly.printPolynomial();
	cout << "Your polynomial is degree: " << myPoly.degree() << endl;
	cout << "Changing the coefficient of the term with exponent 2 to a value of 56." << endl;
	myPoly.changeCoefficient(56,2);
	myPoly.printPolynomial();
	cout << "Returning the coefficient of the term with exponent 3." << endl;
	cout << "The coefficient of the term with exponent 3 is: " << myPoly.coefficient(3) << endl;
	return 0;
} // end function main

