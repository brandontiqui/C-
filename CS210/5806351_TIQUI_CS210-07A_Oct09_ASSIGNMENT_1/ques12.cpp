/**************************************************
 * @author   : Brandon Tiqui                      *
 * @date     : 10.31.09                           *
 * ques12.cpp: question 12                        *
 * Computes the number in the fibonacci sequence. *
 **************************************************/

#include <iostream>
using namespace std;

int number; // variable to hold integer

void promptNum (); // prompts user for an integer
int computeFib ( int ); // computes the fibonacci number
void displayMessage ( int ); // outputs a message to the user
void setNum ( int ); // sets the global variable number
int getNum (); // returns global variable number

// function begins program execution
int main ()
{
	promptNum ();
	displayMessage ( computeFib ( number ) );
	return 0;
} // end function main

void promptNum ()
{
	int num;

	do
	{
		cout << "Enter a nonnegative integer: ";
		cin >> num;
	}
	while ( num < 0 ); // validates for a nonnegative integer

	setNum ( num );
} // end function promptNum

int computeFib ( int n )
{
	int sum = 0;
	if ( n == 0 || n == 1 ) 
		sum += n;
	else 
		sum += computeFib ( n - 1 ) + computeFib ( n - 2 );
	return sum;
} // end function computeFib

void displayMessage ( int n )
{
	cout << "fib( " << getNum () << " ) in the fibonacci sequence is: " 
		<< n << endl;
} // end function displayMessage

void setNum ( int n )
{
	number = n;
}

int getNum ()
{
	return number;
}

