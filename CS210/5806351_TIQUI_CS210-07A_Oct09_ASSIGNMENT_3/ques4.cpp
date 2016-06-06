#include <sstream>
#include <iostream>
#include <cctype> 
using namespace std;

#include <string>
using std::string;

// Global buffer
const int LINE_LENGTH = 128;
char line[LINE_LENGTH];
int lineIndex;

void getLine () {
// Get a line of characters.
// Install a newline character as sentinel.
   cin.getline (line, LINE_LENGTH);
   line[cin.gcount () - 1] = '\n';
   lineIndex = 0;
}

enum State {eI, eF, eM, eSTOP};

void convertToDecimal (string& num, int length) {
// takes a valid hexadecimal value 
// converts to base 10 
// converts integer back into a string  	
   int total = 0;
   for (int i = 0; i < length; i++)
   {
      int temp = 0;
      int power = 1;
      if (isdigit(num[i])) // string is array of char's
	  {
	     temp = num[i] - '0'; // convert ASCII to decimal
		 for (int j = i; j < length - 1; j++)
			 power *= 16; // raise to the power
		 total += temp * power;
	  }
      else if (isxdigit(num[i])) 
	  {
	     if (islower(num[i])) // if lowercase
			 num[i] = toupper(num[i]);
		 temp = num[i] - '7'; // convert ASCII to decimal
		 for (int j = i; j < length - 1; j++)
			 power *= 16; // raise to the power
		 total += temp * power;
	  }
   }
   // convert integer to string
   std::string s;
   std::stringstream out;
   out << total;
   s = out.str();
   num = s; 
} // end function convertToDecimal


void parseNum (bool& v, string& n) {
   State state;
   char nextChar;
   v = true;
   state = eI;
	
   do {
      nextChar = line[lineIndex++];
	  switch (state) {
	     case eI:
			if (isdigit(nextChar)) {
			   n += nextChar;
			   state = eI;
		    }
		    else if (isxdigit(nextChar)) {
			   n += nextChar;
			   state = eI;
		    }
		    else if (nextChar == '\n') {
			   state = eSTOP;
		    }
			else {
		       v = false;
		    }
		    break;
	  }
   }
   while ((state != eSTOP) && v);
   // n contains valid hexadecimal number
   if (v)
      convertToDecimal(n, lineIndex - 1);
}

int main () {
   bool valid;
   string num;
   cout << "Enter a hexadecimal number: ";
   getLine();
   parseNum (valid, num);
   if (valid) {
      cout << "Number = " << num << endl;
   }
   else {
      cout << "Invalid entry." << endl;
   }
   return 0;
}