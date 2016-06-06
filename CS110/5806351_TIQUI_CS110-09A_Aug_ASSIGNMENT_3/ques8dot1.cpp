/************************************
 * @author: Brandon Tiqui           *
 * @date  : 09.25.09                *
 * Question 8.1: ques8dot1.cpp      *
 * Returns the count of odd numbers *
 * from an array of integers.       *
 ************************************/

#include <iostream>
using namespace std;

const int MAX = 10;

int oddCounter ( int [], int );

// function begins program execution
int main ()
{
	//int myArray[MAX];
	int myArray[MAX] = { 1, 3, 24, 88, 0, 17, 321, 91, 5, 482 };
	cout << "There are " << oddCounter ( myArray, MAX ) << " odd numbers in the array."
		<< endl;
	return 0; // indicate successful termination
} // end function main

// function to count odd numbers in an array
int oddCounter ( int arrayA[], int sizeOfArray )
{
	int counter = 0;
	for ( int i = 0; i < sizeOfArray; i++ )
	{	
		if ( arrayA[ i ] % 2 == 1 ) 
			counter++;
	}
	return counter;
} // end function oddCounter