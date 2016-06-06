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
};

// verifies equality of two STACK objects
friend int operator==(STACK a, STACK b)
{
	// Take care of empty cases.
	int status = 0; // set status to false 
	if (a.empty() && b.empty())
		status = 1; // both STACK objects are empty
	
	// Handle non-empty cases
	else if (a.N == b.N)
	{ // number of items on each STACK are equal
		
		// check equality of each item
		for (int i = 0; i < N; i++)
		{
			if (a.s[i] == b.s[i])
				continue;
			else
				break;
		}
		if (i == N) // all items in both STACK's are equal
			status = 1;
	}

	return status;
	
} // end friend function operator==