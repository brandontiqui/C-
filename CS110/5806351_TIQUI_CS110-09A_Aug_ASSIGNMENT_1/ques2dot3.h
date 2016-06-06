/**************************************************************
* @author     : Brandon Tiqui                                 *
* @date       : 08.23.09                                      *
* Question 2.3: ques2dot3.h                                   *
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

	// function to set the student ID number.
	void setStudentNumber( int sNum )
	{
		studentNumber = sNum; // store the student ID number in the object
	} // end function setStudentNumber

	// function to set the student's test score.
	void setScore( int aScore)
	{
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