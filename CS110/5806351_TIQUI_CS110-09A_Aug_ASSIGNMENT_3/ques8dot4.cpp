/***********************************
 * @author: Brandon Tiqui          *
 * @date  : 09.25.09               *
 * Question 8.4: ques8dot4.cpp     *
 * Creates a two dimensional array *
 * under the given specifications. *
 ***********************************/

#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

const int MAX = 10;
int myArray[MAX][MAX];
void createArray( int, int );

// function begins program execution
int main ()
{
	createArray ( MAX, MAX );
	// print array
	for ( int row = 0; row < MAX; row++ )
	{	
		for ( int column = 0; column < MAX; column++ )
		{
			cout << setw( 2 ) << myArray[ row ][ column ] << "   ";
		}
		cout << endl;
	}
	return 0; // indicate successful termination
} // end function main

// function to create a two-dimensional array
void createArray ( int length, int width )
{
	for ( int row = 0; row < MAX; row++ )
	{	
		for ( int column = 0; column < MAX; column++ )
		{
			if ( row > column )
				myArray[ row ][ column ] = -1;
			else if ( row == column )
				myArray[ row ][ column ] = 0;
			else
				myArray[ row ][ column ] = 1;
		}	
	}
} // end function createArray