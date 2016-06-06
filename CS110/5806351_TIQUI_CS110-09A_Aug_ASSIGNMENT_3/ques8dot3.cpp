/******************************************
 * @author: Brandon Tiqui                 *
 * @date  : 09.25.09                      *
 * Question 8.3: ques8dot3.cpp            *
 * Returns the closest number in an array *
 * to a second parameter.                 *
 ******************************************/

#include <iostream>
using namespace std;

const int MAX = 5;
const int compareNum = 2;

int findClosest( int [], int );

// function begins program execution
int main ()
{
	//int myArray[MAX];
	int myArray[MAX] = {5, -3, 18, 9, 4}; 
	cout << "The closest number in the array is: " << findClosest( myArray, compareNum) 
		<< endl;
	return 0; // indicate successful termination
} // end function main

// function to count odd numbers in an array
int findClosest ( int arrayA[], int number )
{
	// set closest to first element
	int closest = arrayA[ 0 ];
	for ( int i = 1; i < MAX; i++ )
	{	
		// if difference between number and first element is at least zero
		if ( ( number - closest ) >= 0 ) 
		{
			if ( (number - arrayA[ i ]) < 0 )
			{
				if ( (number - arrayA[ i ]) * -1  <  (number - closest) )
					closest = arrayA[ i ];
			}
			else 
				if ( (number - arrayA[ i ]) < (number - closest) )
					closest = arrayA[ i ];
		}

		// if difference between number and first element is less than zero
		else
		{
			if ( (number - arrayA[ i ]) < 0 )
			{
				if ( (number - arrayA[ i ]) * -1  <  (closest - number) )
					closest = arrayA[ i ];
			}
			else 
				if ( (number - arrayA[ i ]) < (closest - number) )
					closest = arrayA[ i ];
		}
	}
	return closest;
} // end function oddCounter