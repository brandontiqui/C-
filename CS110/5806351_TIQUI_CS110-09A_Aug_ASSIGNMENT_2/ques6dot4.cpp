/****************************************
 * @author: Brandon Tiqui               * 
 * @date  : 09.08.09                    *
 * Question 6.4: ques6dot4.cpp          * 
 * Reads in two integers simultaneously *
 * and displays their sum.              *
 ****************************************/

#include <iostream>
using namespace std;

void readIntegers();
void displaySum(int, int);

int integerA;
int integerB;
// function begins program execution
int main ()
{
	readIntegers();
	displaySum( integerA, integerB );
	return 0; // indicate successful termination
} // end main

void readIntegers()
{
	cout << "Please enter two integers: ";
	cin >> integerA >> integerB;
} // end function readIntegers

void displaySum( int numA, int numB )
{	
	cout << "The sum of " << integerA << " and " 
		<< integerB << " is: " << integerA + integerB << endl;
} // end function displaySum