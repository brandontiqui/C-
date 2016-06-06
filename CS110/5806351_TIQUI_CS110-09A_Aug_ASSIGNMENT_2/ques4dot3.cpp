/*****************************************
 * @author: Brandon Tiqui                * 
 * @date  : 09.06.09                     *
 * Question 4.3: ques4dot3.cpp           * 
 * Demonstrates use of a do/while-loop.  *
 *****************************************/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// function begins program execution
int main()
{	
	int inputNum;
	cin >> inputNum;
	int value = inputNum;

	do
	{	
		cout << value;
		++value;
	}while ( value <= 10 );
	
	cout << endl;
	return 0;
} // end main