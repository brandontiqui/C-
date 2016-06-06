/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.06.09                     *
 * Question 4.4: ques4dot4.cpp           * 
 * Demonstrates use of a menu.           *
 *****************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

# include <string>
using std::string;

// function begins program execution
int main()
{	
	int choice;
	double total       =   0.00; // counter for total amount
	double tacos       =   1.67;
	double golfBags    = 158.99;
	double maskingTape =   5.00;
	
	string message = "**********************************\n"
		             "*        Welcome to iMart!       *\n"
		             "*     Please enter a number:     *\n"
		             "* [0] - QUIT                     *\n"
		             "* [1] - TACOS                    *\n"
		             "* [2] - GOLF BAGS                *\n"
		             "* [3] - MASKING TAPE ROLL        *\n"
		             "**********************************\n";

	do 
	{
		cout << message;
		cin >> choice;
	    cout << endl;
		
		switch ( choice )
		{
			int numItems;
				
			case 0:
			 break;
			
			case 1:
			 cout << "Tacos are $" << tacos << " each.  How many would you like?: ";
			 cin >> numItems;
		     total += numItems * tacos;
	     	 break;

			case 2:
			 cout << "Golf bags are $" << golfBags << " each.  How many would you like?: ";
			 cin >> numItems;
			 total += numItems * golfBags;
			 break;
	
			case 3:
			 cout << "Masking tape is $" << maskingTape << " per roll.  How many would you like?: ";
			 cin >> numItems;
		     total += numItems * maskingTape;
			 break;

			default:
			 cout << "Invalid entry.";
		} // end switch
		cout << endl;
	} while ( choice != 0 );
	
	cout << "Your total is: $" << total 
		<< "\nThank you for shopping at iMart!" << endl;
	return 0;
} // end main