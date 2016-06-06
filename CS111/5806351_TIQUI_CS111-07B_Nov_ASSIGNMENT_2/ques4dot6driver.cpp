/**
 * driver
 **********/
#include <iostream>
using namespace std;

#include <string>
using std::string;

#include "ques4dot6.h"

int main()
{
	// test createList and display functions
	cout << "Enter a string followed by the period symbol [.]: " << endl;
	Newstring astring; 
	astring.createList();
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
	bstring.createList();
	astring.concatenate(bstring); 
	astring.display();
	
	//test substring function
	cout << "Enter a string of character(s) followed by the period symbol [.] to search for in your current string: " << endl;
    Newstring searchString;
	searchString.createList();
	if (astring.substring(searchString))
		cout << "Your substring is located inside the string." << endl;
	else
		cout << "Your substring was not found." << endl;
	
	return 0;
}