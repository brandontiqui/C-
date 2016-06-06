/**
 * implementation
 **********/
#include <iostream>
using namespace std;

#include "ques3dot7.h"

Polynomial::Polynomial ()
{
	inputPolynomial();
} // end Polynomial constructor

void Polynomial::inputPolynomial()
{
	cout << "Enter the exponent of the first term: ";
	cin >> size;
	myArray = new int [size + 1];
	for (int i = size; i >= 0; i--)
	{
		cout << "Enter the coefficient of the term with exponent " 
			<< i << ": ";
		cin >> myArray[i];
	}
} // end function inputPolynomial

int Polynomial::degree()
{
	return size;
} // end function degree

int Polynomial::coefficient(int power)
{
	return myArray[power];
} // end function Coefficient

void Polynomial::changeCoefficient(int newCoefficient, int power)
{
	myArray[power] = newCoefficient;
} // end function changeCoefficient

void Polynomial::printPolynomial()
{

	for (int i = size; i >= 0; i--)
	{
		if (myArray[i] != 0)
		{
			if (i == 0)
			{
				cout << myArray[i];
			}
			else if (i == 1)
			{
				cout << myArray[i] << "x + ";
			}
			else
			{
				cout << myArray[i] << "x^" << i << " + ";
			}
		}
	} 
	cout << endl;
} // end function printPolynomial


