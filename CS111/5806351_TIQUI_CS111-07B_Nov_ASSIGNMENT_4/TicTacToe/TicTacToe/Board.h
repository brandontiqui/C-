/*****************************
 * Interface for class Board *
 *****************************/
class Board
{
public:
	enum Player {X = -1, O, E};
	Board(); // (constructor) This initializes the board, which means it sets all the positions 
			 // to empty and does all else necessary to make the board ready for use.
	void place(Player P, int column, int row); 
	// A procedure that takes a Player P and sets the Column and Row of the board to be Player 
	// P if that position is empty. If the position is occupied, the player loses a turn. 
	bool win(Player P); // A function that returns true if Player P has won the game, and false otherwise. 
	bool stalemate(); // A function  that   returns  true  if  the  board  represents  a  game 
		              // in  stalemate,  and  false otherwise.
	void displayBoard(); // A function that displays the board.
private:
	int anArray[3][3];
}; // end class board