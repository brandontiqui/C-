#include <iostream>
using namespace std;

typedef int Item; // set Item to represent integers
template <class Item>
class QUEUE
{
private:
	Item *q;
	int N, head, tail;

public:
	QUEUE(int maxN)
	{
		q = new Item[maxN + 1];
		N = maxN + 1; 
		head = N;
		tail = 0;
	} // end constructor QUEUE

	int empty() const
	{
		return head % N == tail;
	} // end function empty

	void put(Item item)
	{
		if (head - tail != N - 1)
		{ // queue is not full
			q[tail++] = item; 
			tail = tail % N;
		}
	} // end function put

	Item get()
	{ 
		if (!empty())
		{
			head = head % N;
			return q[head++];
		}
	} // end function get

	void print ()
	{
		cout << tail << head << N << endl;
	}
}; // end class QUEUE

// function begins program execution
int main()
{
	Item a;
	int testValue = 17;
	int maxNum = 1; // size of queue
	QUEUE<Item> save(maxNum);

	/********************************************
	/* begin test of get function with empty QUEUE */
	cout << "***Testing get function for empty queue." << endl;
	save.get();
	cout << "The get function has been executed." << endl;
	
	cout << "Placing the integer " << testValue << " into the queue..." << endl;
	save.put(testValue);
	cout << "The put function has been executed." << endl;
	cout << "Retrieving " << testValue << " from the queue..." << endl;
	a = save.get();
	cout << "Value retrieved: " << a << endl;
	if (a == testValue)
		cout << "***Test completed.\nStatus: PASSED" << endl;
	else 
		cout << "***Test completed.\nStatus: FAILED" << endl;
	cout << endl;
	/* end test of get function with empty QUEUE
	/********************************************/


	/********************************************
	/* begin test of put function with full QUEUE */
	cout << "***Testing put function for full queue.  Queue has size of: " 
		<< maxNum << endl;
	cout << "Placing the integer " << testValue << " into the queue." << endl; 
	save.put(testValue);

	cout << "Placing another integer " << testValue << " into the full queue." << endl; 
	save.put(testValue);
	cout << "Executing get function." << endl;
	cout << testValue << " should be displayed." << endl;
	
	a = save.get();
	cout << "Value retrieved: " << a << endl;
	if (a == testValue)
		cout << "***Test completed.\nStatus: PASSED" << endl;
	else 
		cout << "***Test completed.\nStatus: FAILED" << endl;
	cout << endl;
	/* end test of put function with full QUEUE
	/********************************************/

	return 0; // indicate successful completion
} // end function main