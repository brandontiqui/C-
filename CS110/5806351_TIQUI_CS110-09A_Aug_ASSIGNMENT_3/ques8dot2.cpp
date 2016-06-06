/************************************
 * @author: Brandon Tiqui           *
 * @date  : 09.25.09                *
 * Question 8.2: ques8dot2.cpp      *
 * Returns the sum of odd numbers   *
 * from an array of integers.       *
 ************************************/

#include <iostream>
using namespace std;

const int MAX = 10;

int oddSum( int [], int );

// function begins program execution
int main ()
{
	//int myArray[MAX];
	int myArray[MAX] = { 1, 3, 24, 88, 0, 17, 321, 91, 5, 482 };
	cout << "The sum of odd numbers in the array is: " << oddSum( myArray, MAX ) 
		<< endl;
	return 0; // indicate successful termination
} // end function main

// function to count odd numbers in an array
int oddSum ( int arrayA[], int sizeOfArray )
{
	int total = 0;
	for ( int i = 0; i < sizeOfArray; i++ )
	{	
		if ( arrayA[ i ] % 2 == 1 ) 
			total += arrayA[ i ];
	}
	return total;
} // end function oddCounter