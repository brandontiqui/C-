/**
 * interface
 **********/
class Newstring
{
public:
	Newstring();
	void inputChar ( char);
	void display ();
	int length ();
	void concatenate (char);
	void concatenate (Newstring);
	bool substring (Newstring);
	void createList ();

private:
	struct Node
	{
		char item;
		Node *next; 
	};
	Node *head;
};
