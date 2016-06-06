/**********************************
 * Implementation for class Board *
 **********************************/
#include <iostream>
using namespace std;

#include "Board.h"

Board::Board(){ 
// (constructor) This initializes the board, which means it sets all the positions 
// to empty and does all else necessary to make the board ready for use.
	// loop through array's rows
	for (int i = 0; i < 3; i++){
		// loop through columns of current row
		for (int j = 0; j < 3; j++)
			anArray[i][j] = E;
	}
} // end Board constructor
	
void Board::place(Player P, int column, int row){
// A procedure that takes a Player P and sets the Column and Row of the board to be Player 
// P if that position is empty. If the position is occupied, the player loses a turn. 
	if (anArray[row][column] == E)
		anArray[row][column] = P;
} // end function place
	
bool Board::win(Player P){ 
// A function that returns true if Player P has won the game, and false otherwise. 
	bool status = false;
	int total = 0;
	/**************************
	 * Test rows for a winner *
	 *************************/
	for (int i = 0; i < 3 && !status; i++){
	// loop through columns of current row
		for (int j = 0; j < 3; j++)
		{
			switch (anArray[i][j])
			{
				case X: 
					total += X;
					break;
				case O:
					total += O;
					break;
				case E:
					total += E;
					break;
				default:
					break;
			} // end switch	
		} // end inner for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
			status = true; // There is a winner.
	} // end outer for
	
	/*****************************
	 * Test columns for a winner *
	 *****************************/
	if (!status)
	{
		for (int j = 0; j < 3; j++ && status){
			// loop through rows of current column
			for (int i = 0; i < 3; i++)
			{
				switch (anArray[i][j])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner for
			if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = true; // There is a winner.
		} // end outer for 
	} // end if
	/*******************************
	 * Test diagonals for a winner *
	 *******************************/
	if (!status)
	{	// test diagonal from top left to bottom right
		for (int i = 0; i < 3; i++){
			// loop through columns of current row
			for (int j = 0; j < 3; j++)
			{
				if (j == i)
				{
					switch (anArray[i][j])
					{
						case X: 
							total += X;
							break;
						case O:
							total += O;
							break;
						case E:
							total += E;
							break;
						default:
							break;
					} // end switch
				} // end inner if
			} // end inner for
		} // end outer for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = true; // There is a winner.
	} // end outer if

	if (!status)
	{	// test diagonal from bottom left to top right
		for (int i = 2; i >= 0; i--){
			if (i == 2)
			{
				switch (anArray[i][i - i])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if

			else if (i == 1)
			{
				switch (anArray[i][i])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if

			else if (i == 0)
			{
				switch (anArray[i][i + 2])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if
		} // end for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = true; // There is a winner.
	} // end outer if
	
	// update status of Player P
	if (status) // if a winner exists 
	{	// check to see if winner is Player P
		if (P < 0 && total == 0)
			status = false; // Player X did not win (Player O won).
		else if (P == 0 && total == -3) 
			status = false; // Player O did not win (Player X won).
	} // end outer if
	return status;
} // end function win

bool Board::stalemate()
{ // A function  that   returns  true  if  the  board  represents  a  game 
  // in  stalemate,  and  false otherwise.
	bool status = true;
	int total = 0;
	/**************************
	 * Test rows for a winner *
	 *************************/
	for (int i = 0; i < 3 && status; i++){
	// loop through columns of current row
		for (int j = 0; j < 3; j++)
		{
			switch (anArray[i][j])
			{
				case X: 
					total += X;
					break;
				case O:
					total += O;
					break;
				case E:
					total += E;
					break;
				default:
					break;
			} // end switch	
		} // end inner for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
			status = false; // There is a winner, thus no stalemate.
	} // end outer for
	

	/*****************************
	 * Test columns for a winner *
	 *****************************/
	if (status)
	{
		for (int j = 0; j < 3; j++ && status){
			// loop through rows of current column
			for (int i = 0; i < 3; i++)
			{
				switch (anArray[i][j])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner for
			if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = false; // There is a winner, thus no stalemate.
		} // end outer for 
	} // end if
	/*******************************
	 * Test diagonals for a winner *
	 *******************************/
	if (status)
	{	// test diagonal from top left to bottom right
		for (int i = 0; i < 3; i++){
			// loop through columns of current row
			for (int j = 0; j < 3; j++)
			{
				if (j == i)
				{
					switch (anArray[i][j])
					{
						case X: 
							total += X;
							break;
						case O:
							total += O;
							break;
						case E:
							total += E;
							break;
						default:
							break;
					} // end switch
				} // end inner if
			} // end inner for
		} // end outer for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = false; // There is a winner, thus no stalemate.
	} // end outer if

	if (status)
	{	// test diagonal from bottom left to top right
		for (int i = 2; i >= 0; i--){
			if (i == 2)
			{
				switch (anArray[i][i - i])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if

			else if (i == 1)
			{
				switch (anArray[i][i])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if

			else if (i == 0)
			{
				switch (anArray[i][i + 2])
				{
					case X: 
						total += X;
						break;
					case O:
						total += O;
						break;
					case E:
						total += E;
						break;
					default:
						break;
				} // end switch
			} // end inner if
		} // end for
		if (total == -3 || total == 0) // value of X is -1, O is zero, E is 2
				status = false; // There is a winner, thus no stalemate.
	} // end outer if
	return status;
} // end function stalemate

void Board::displayBoard(){
// A function that displays the board.
	for (int i = 0; i < 3; i++){
		// loop through columns of current row
		for (int j = 0; j < 3; j++)
		{
			switch (anArray[i][j])
			{
				case X: 
					cout << "X" << " ";
				break;

				case O:
					cout << "O" << " ";
				break;

				case E:
					cout << "E" << " ";
				break;

				default:
				break;
			}
		}
		cout << endl; // start new line of output
	} // end outer for
	cout << endl;
} // end function displayBoard