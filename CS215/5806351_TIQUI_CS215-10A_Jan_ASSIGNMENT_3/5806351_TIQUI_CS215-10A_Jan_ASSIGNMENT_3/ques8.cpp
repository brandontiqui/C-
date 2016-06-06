template <class Item>
class STACK
{
private:
	Item *s; 
	int N;

public:
	STACK(int maxN)
	{
		s = new Item[maxN];
		N = 0;
	}

	int empty() const
	{
		return N == 0;
	}

	void push(Item item)
	{
		s[N++] = item;
	}

	Item pop()
	{
		return s[--N];
	}

	// calculates total of all items in the STACK object
	// precondition: Items are integers
	// postcondition: sum of all Items is calculated
	// returns: total 
	int sum()
	{
		int total = 0; // set total to zero 
	
		if !(empty()) 
		{ // STACK is not empty 
			for (int i = 0; i < N; i++)
			{ // calculate sum
				total += s[i];
			}
		} // end if
		return total;

	} // end function sum
};