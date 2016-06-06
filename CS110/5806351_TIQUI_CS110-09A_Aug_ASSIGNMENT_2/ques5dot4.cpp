#include <iostream>
using namespace std;

#include <string>
using std::string;

int determineSign ();

enum Sign { NEGATIVE = -1, ZERO, POSITIVE };

// function begins program execution
int main()
{
	int theSign = determineSign ();
	string word; 
	
	switch ( theSign )
	{
		case -1:
	      word = "negative";
		  break;

		case  0:
		  word = "zero";
		  break;

		case  1:
		  word = "positive";
	      break;

		default:
		  word = "invalid";
	}
	cout << "The number you entered was " << word 
		<< "." << endl;
	return 0; // indicate successful termination
} // end main

int determineSign ()
{
	int eNumber;
	int number;
	cout << "Please enter an integer: ";
	cin >> number;
	if ( number < 0 )
		eNumber = NEGATIVE;
	else if ( number > 0 )
		eNumber = POSITIVE;
	else
		eNumber = ZERO;
	return eNumber;
} // end function determineSign