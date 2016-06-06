/**************************************************************
* @author     : Brandon Tiqui                                 *
* @date       : 09.07.09                                      *
* Question 5.3: ques5dot3.cpp                                 *
* Receives a radius in the form of a float and returns the    *
* float to the user.                                          *
***************************************************************/
#include <iostream>
using namespace std;

float GetRadius ();

// function main begins program execution
int main()
{
	cout << GetRadius () << endl;
	return 0; // indicate successful completion
} // end main

float GetRadius ()
{
	float radius;
	cout << "Enter a radius: ";
	cin >> radius;
	return radius;
}