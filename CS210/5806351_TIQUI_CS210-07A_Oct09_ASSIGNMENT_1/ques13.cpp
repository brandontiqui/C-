/**************************************************
 * @author   : Brandon Tiqui                      *
 * @date     : 11.02.09                           *
 * ques13.cpp: question 13                        *
 * Computes the binary sum of two binary numbers. *
 **************************************************/

#include <iostream>
using namespace std;

const int MAX = 8;
int binNumA[MAX];
int binNumB[MAX];
int sum[MAX];
int cBit;

void binaryAdd( int*, int&, const int*, const int* );
void inputBinary ();

// function begins program execution
int main ()
{
	inputBinary ();
	for (int i = 0; i < MAX; i++)
		cout << binNumA[i];
	cout << endl;
	for (int i = 0; i < MAX; i++)
		cout << binNumB[i]; 
	cout << endl;
	binaryAdd ( sum, cBit, binNumA, binNumB );
	cout<< "--------" << endl;
	for (int i = 0; i < MAX; i++)
		cout << sum[i]; 
	cout << endl;
	cout << "cBit is: " << cBit << endl;
	return 0; // indicate successful termination
} // end function main

void binaryAdd(int* sum, int& cBit, const int* bin1, const int* bin2)
{
	for ( int i = MAX - 1; i >= 0; i-- )
	{
		switch ( cBit + bin1[i] + bin2[i] )
		{ 
			case 0:
				sum[i] = 0;
				cBit = 0;
				break;
			case 1:
				sum[i] = 1;
				cBit = 0;
				break;
			case 2:
				sum[i] = 0;
				cBit = 1;
				break;
			case 3:
				sum[i] = 1;
				cBit = 1;
				break;
		}
	}
} // end function binaryAdd

void inputBinary ()
{
	cout << "Enter " << MAX << " binary digits:\n";
	for ( int i = 0; i < MAX; i++ )
	{
		cin >> binNumA[i];
		while ( binNumA[i] < 0 || binNumA[i] > 1 )
		{
			cout << "Enter a zero or a one: ";
			cin >> binNumA[i];
		}
	}
	
	cout << "Enter " << MAX << " more binary digits:\n";
	for ( int i = 0; i < MAX; i++ )
	{
		cin >> binNumB[i];
		while ( binNumB[i] < 0 || binNumB[i] > 1 )
		{
			cout << "Enter a zero or a one: ";
			cin >> binNumB[i];
		}
	}
} // end function inputBinary

