/**
 * driver
 **********/
#include <iostream>
using namespace std;

#include <string>
using std::string;

#include "ques7.h"

int main()
{
	// test createList and display functions
	cout << "Enter a string followed by the period symbol [.]: " << endl;
	Newstring astring; 
	astring.display(); 
	
	// test length function
	cout << "The length of your string is: " << astring.length() << endl; 
	
	// test concatenate(char) function
	cout << "Appending the letter 'v' to the end of your string . . ." << endl;
	astring.concatenate('v'); 
	astring.display();
	
	// test concatenate(Newstring) function
	cout << "Enter a string of characters followed by the period symbol [.] to add to the end of your current string: " << endl;
	Newstring bstring;
	astring.concatenate(bstring); 
	astring.display();
	
	return 0;
}
