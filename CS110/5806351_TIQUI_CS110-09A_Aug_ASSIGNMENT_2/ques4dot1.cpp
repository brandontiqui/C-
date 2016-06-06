/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.06.09                     *
 * Question 4.1: ques4dot1.cpp           * 
 * Displays a statement depending on the *
 * number entered by the user.           *
 *****************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{
	int number;
	
	cout << "Enter an integer from 1 to 5: ";
	cin >> number;
	cout << endl;

	// determine which number was entered
	switch ( number )
	{
		case 1: // number was 1
	     cout << "You entered the number one." << endl; 
		 break; // necessary to exit switch
		
		case 2: // number was 2
	     cout << "You entered the number two." << endl; 
    	 break; // exit switch
		
		case 3: // number was 3
	     cout << "You entered the number three." << endl; 
		 break; // exit switch
		
		case 4: // number was 4
	     cout << "You entered the number four." << endl; 
		 break; // exit switch
		
		case 5: // number was 5
	     cout << "You entered the number five." << endl; 
		 break; // exit switch

		default: // catch all other numbers
		 cout << "You entered an invalid integer." << endl; 
	} // end switch
	return 0; // indicate successful termination
} // end main