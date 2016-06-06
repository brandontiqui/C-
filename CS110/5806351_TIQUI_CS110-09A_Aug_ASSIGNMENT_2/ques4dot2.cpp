


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{	
	int inputNum;
	cin >> inputNum;

	for ( int value = inputNum; value <= 10; ++value )
		cout << value;
	
	cout << endl;
	return 0;
} // end main