/******************************
 * driver to test class Board *
 ******************************/
#include <iostream>
using namespace std;

#include "Board.h"

// function main begins program execution
int main ()
{
	// Test constructor.
	cout << "Test of the constructor.  Board is initialized with [E]mpty slots." << endl;
	Board a;
	a.displayBoard(); // initialize an empty board
	
	// Test win function.
	cout << "Test of the win function for player X. The result should be false." << endl;
	cout << "The result of the win function is: ";
	if (a.win(Board::X) )
		cout << "true" << endl;
	else 
		cout << "false" << endl;
	cout << endl;

	// Test place function.
	cout << "Test of the place function for player X.  " << endl;
	cout <<	"Placing an X in row 0, column 0 . . ." << endl;
	a.place(Board::X, 0, 0);
	a.displayBoard();

	cout << "Placing an O in row 1, column 1 . . ." << endl;
	a.place(Board::O, 1, 1);
	a.displayBoard();

	cout << "Attempting to place an X in row 1, column 1 . . ." << endl;
	cout << "No change should occur." << endl;
	a.place(Board::X, 1, 1);
	a.displayBoard();

	// Create win scenario for player X.
	cout << "Creating a win scenario for player X." << endl;
	a.place(Board::X, 1, 0);
	a.place(Board::X, 2, 0);
	a.displayBoard();

	// Test win function.
	cout << "Test of the win function for player X. The result should be true." << endl;
	cout << "The result of the win function is: ";
	if (a.win(Board::X) )
		cout << "true" << endl;
	else 
		cout << "false" << endl;
	cout << endl;

	cout << "Test of the win function for player O. The result should be false." << endl;
	cout << "The result of the win function is: ";
	if (a.win(Board::O) )
		cout << "true" << endl;
	else 
		cout << "false" << endl;
	cout << endl;

	// Test stalemate function.
	cout << "Test of the stalemate function. The result should be false." << endl;
	cout << "The result of the stalemate function is: ";
	if (a.stalemate() > 0)
		cout << "true" << endl;
	else 
		cout << "false" << endl;
	cout << endl;

	return 0; // indicate successful termination
} // end function main