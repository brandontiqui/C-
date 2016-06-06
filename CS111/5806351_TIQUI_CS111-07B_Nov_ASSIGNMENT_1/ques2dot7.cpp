/*******************************************
 * @author: Brandon Tiqui                  *
 * @date  : November 14, 2009              *
 * ques2dot7.cpp: Question 2.7             *
 * Implements maxArray and helper function *
 * max using recursion.                    *
 *******************************************/

#include <iostream>
using namespace std;

int maxArray ( int [], int ); // returns maximum value in an array
int max ( int, int ); // returns maximum of two values


// function begins program execution
int main ()
{
    const int maxSize = 4;
    int anArray [maxSize] = {1, 45, 17, 23};
	cout << maxArray ( anArray, maxSize ) << endl;
	return 0; // indicate successful termination
} // end function main

// begin function maxArray
int maxArray ( int arrayA[], int arraySize )
{
	int num;
	if ( arraySize == 1 )
	{
		num = arrayA[0];
	}
	else if ( arraySize > 1 )
	{
		// create arrayB
		int* arrayB = new int[arraySize / 2];
		for ( int i = 0; i < arraySize / 2; i++ )
		{
			arrayB[i] = arrayA[i]; 
		}

		// create arrayC
		int* arrayC = new int[arraySize / 2];
		int j = 0;
		for ( int i = arraySize / 2; i < arraySize; i++)
		{
			arrayC[j] = arrayA[i];
			j++;
		}
		num = max ( maxArray (arrayB, arraySize / 2), maxArray (arrayC, arraySize / 2) ); // determine the largest value
	}
	return num;
} // end function maxArray

// begin function max
int max ( int a, int b )
{
	int biggest = a;
	if ( b > a )
		biggest = b;
	return biggest;
} // end function max
