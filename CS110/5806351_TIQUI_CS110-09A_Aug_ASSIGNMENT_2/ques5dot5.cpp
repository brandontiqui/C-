/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.07.09                     *
 * Question 5.5: ques5dot5.cpp           * 
 * Calculates distance given the         *
 * acceleration rate and time using      *
 * meters and seconds as units.          *
 *****************************************/
#include <iostream>
using namespace std;

double calculateDistance ( double, double );

// function begins program execution
int main()
{
	cout << calculateDistance ( 9.8, 20 ) << endl;
	return 0; // indicate successful termination
} // end main

double calculateDistance ( double accelRate, double time )
{
	return accelRate * time * time / 2;
} // end function calculateDistance