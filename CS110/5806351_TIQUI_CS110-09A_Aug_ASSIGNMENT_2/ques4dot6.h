/**************************************************************
* @author     : Brandon Tiqui                                 *
* @date       : 09.07.09                                      *
* Question 4.6: ques4dot6.h                                   *
* StudentGrade class definition in a separate file from main. *
***************************************************************/

#include <iostream>
using std::cout;
using std::endl;

#include <string> // class StudentGrade uses C++ standard string class
using std::string;

// StudentGrade class definition
class StudentGrade
{
public:
	// constructor initializes studentNumber and score with integers supplied as arguments
	StudentGrade( int studentId, int theScore )
	{	
		setStudentNumber( studentId ); // call set function to initialize studentNumber
		setScore( theScore ); // call set function to initialize score
	}

	// function to set the student ID number
	// ID number must be in the range 10000-50000.
	void setStudentNumber( int sNum )
	{
		if ( sNum >= 10000 && sNum <= 50000 )
			studentNumber = sNum; // store the student ID number in the object
	} // end function setStudentNumber

	// function to set the student's test score
	// grade should be in the range 0-100
	void setScore( int aScore)
	{
		if ( aScore >= 0 && aScore <= 100 )
			score = aScore; // store the student's test score in the object
	}

	// function to get the student's ID number.
	int getStudentNumber()
	{
		return studentNumber; // return object's studentNumber
	} // end function getStudentNumber

	// function to get a student's test score
	int getScore()
	{
		return score; // return object's score
	} // end function getScore

	// display the student's record to the StudentGrade user
	void displayRecord()
	{
		// call getStudentNumber to get the studentNumber
		// call getScore to get the score
		cout << "Student " << getStudentNumber() << " has a score of "
			<< getScore() << "." << endl;
	} // end function displayRecord
private: 
	int studentNumber; // student ID number for this StudentGrade
	int score; // student's test score for this StudentGrade
}; // end class StudentGrade