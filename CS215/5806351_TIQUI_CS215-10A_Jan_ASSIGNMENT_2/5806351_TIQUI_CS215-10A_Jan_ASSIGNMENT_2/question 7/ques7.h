/**
 * interface
 **********/
class Newstring
{
public:
	Newstring(); // creates a Newstring object
	void concatenate (Newstring); // copies contents of parameter onto the end of string; does not merely   
								  // make end of  string point to beginning of Newstring object
	void concatenate (char); // concatenates the single character ch onto the end of string
	void display (); // display string on standard output 
	int length (); // returns the length of string
	
private:
	struct Node
	{
		char item;
		Node *next; 
	};
	Node *head;

	void createList (); // creates a list of characters
	void inputChar ( char); // inputs a character from standard output
};
