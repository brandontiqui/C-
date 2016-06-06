/**********************************************************************
* @author     : Brandon Tiqui                                         *
* @date       : 09.07.09                                              *
* Question 4.6: ques4dot6.cpp                                         *
* Including class StudentGrade from file ques4dot6.h for use in main. * 
***********************************************************************/

#include "ques4dot6.h" // include definition of class GradeBook

// function main begins program execution
int main()
{
	// creates two StudentGrade objects
	// tests constructor and set methods
	StudentGrade ramanujan ( 17543, 87 ); 
	StudentGrade brandon ( 49567, 100 );
	
	// invoke displayRecord on two objects
	// tests display and get methods
	brandon.displayRecord();
	ramanujan.displayRecord();

	return 0; // indicate successful termination
} // end main