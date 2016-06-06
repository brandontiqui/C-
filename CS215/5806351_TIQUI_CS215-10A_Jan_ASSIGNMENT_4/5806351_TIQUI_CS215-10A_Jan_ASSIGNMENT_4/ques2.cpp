#include <iostream>
using namespace std;

int multiply (int, int);

// function begins program execution
int main ()
{
	cout << multiply (1, 4) << endl;
	return 0; // indicate successful termination
} // end function main

/***
 * @pre : y is a power of 2 		  
   @post: returns product of x and y *
                                   ***/
int multiply (int x, int y)
{
	if (x == 0 || y == 1)
		return x;
	int temp = multiply (x, y / 2);
	return temp + temp;
} // end function multiply