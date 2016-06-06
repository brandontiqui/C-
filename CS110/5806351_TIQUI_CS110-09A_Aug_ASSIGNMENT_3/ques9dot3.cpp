/*****************************************
 * @author: Brandon Tiqui                *
 * @date  : 09.26.09                     *
 * Question 9.3: ques9dot3.cpp           *
 * Creates a class for a traffic light.  *
 * Driver is included to test the class. *
 *****************************************/

#include <iostream>
using namespace std;

enum Status { GREEN, AMBER, RED };

// TrafficLight class definition
class TrafficLight
{
public:
	// constructors to create TrafficLight objects
	TrafficLight () // initializes object with a red light
	{
		setStatus ( RED );
	}

	TrafficLight ( Status color )
	{
		setStatus ( color );
	}
	
	// mutator method to set the status of the light
	void setStatus ( Status color )
	{
		lightStatus = color;
	} // end function setStatus
	
	// accessor method to get the status of the light
	Status getStatus () const
	{
		return lightStatus;
	} // end function getStatus

	void printMessage () const
	{
		cout << "The state of the light is ";
	
		switch ( getStatus () )
		{
			case GREEN:
				cout << "green.";
				break;
			case AMBER:
				cout << "amber.";
				break;
			case RED:
				cout << "red.";
				break;
			default:
				break;
		}	
		cout << endl;
	} // end function printMessage
private:
	Status lightStatus;
}; // end class TrafficLight



/*************************************
 * Driver to test class TrafficLight *
 *************************************/

// function main begins program execution
int main ()
{
	// test light A
	TrafficLight lightA = TrafficLight ();
	cout << "Light A should be red." << endl;
	lightA.printMessage ();
	lightA.setStatus ( AMBER );
	cout << "Light A should be amber." << endl;
	lightA.printMessage ();
	
	// test light B
	TrafficLight lightB = TrafficLight ( GREEN );
	cout << "Light B should be green." << endl;
	lightB.printMessage ();
	return 0; // indicate successful termination
} // end function main

