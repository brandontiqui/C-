/**********************************************************************
* @author     : Brandon Tiqui                                         *
* @date       : 08.23.09                                              *
* Question 2.3: ques2dot3.cpp                                         *
* Including class StudentGrade from file ques2dot3.h for use in main. * 
***********************************************************************/

#include "ques2dot3.h" // include definition of class GradeBook

// function main begins program execution
int main()
{
	// creates two StudentGrade objects
	// tests constructor and set methods
	StudentGrade ramanujan ( 1729, 87 ); 
	StudentGrade brandon ( 5806351, 100 );
	
	// invoke displayRecord on two objects
	// tests display and get methods
	brandon.displayRecord();
	ramanujan.displayRecord();

	return 0; // indicate successful termination
} // end main