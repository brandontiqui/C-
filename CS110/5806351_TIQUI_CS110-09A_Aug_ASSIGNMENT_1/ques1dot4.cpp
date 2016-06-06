// @author: Brandon Tiqui
// @date  : August 23, 2009
// Question 1.4: ques1dot4.cpp
// Prompts user for grade and outputs error message
// if not in the range 0-100.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	// initialization phase
	int grade;

	// processing phase
	cout << "Enter a grade: "; // prompt the user for a grade
	cin >> grade; // input and store grade
	if ( grade < 0 )
		cout << "Grade is too low!" << endl; // output error message for negative grade
	else if ( grade > 100 )
		cout << "Grade is too high!" << endl; // output error message for grade above 100

	// termination phase	
	return 0; // successful completion
}; // end main