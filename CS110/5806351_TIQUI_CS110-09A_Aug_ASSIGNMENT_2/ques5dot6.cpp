/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.07.09                     *
 * Question 5.6: ques5dot6.cpp           * 
 * Displays the user's value doubled.    *
 *****************************************/
#include <iostream>
using namespace std;

int readInteger ();
void displayDouble ( int );

// function begins program execution
int main()
{
	displayDouble ( readInteger () );
	return 0; // indicate successful termination
} // end main

int readInteger ()
{
	int aNum;
	cout << "Please enter an integer: ";
	cin >> aNum;
	return aNum;
} // end function readInteger

void displayDouble ( int number )
{
	cout << number * 2 << endl;
} // end function displayDouble