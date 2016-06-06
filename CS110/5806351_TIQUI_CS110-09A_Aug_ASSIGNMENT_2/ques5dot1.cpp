#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>

#define PI 3.141592654 // defines PI constant

double convertToRadians ( double );

// function begins program execution
int main()
{
	double angleOne;
	double angleTwo;
	
	// prompt user for two angles
	cout << "Enter the number of degrees for angle 1: ";
	cin >> angleOne;
	cout << "Enter the number of degrees for angle 2: ";
	cin >> angleTwo;
	cout << endl;
	
	// display tangent values
	cout << "Angle 1 ( " << angleOne << " degrees ) has a tangent value of: " 
		<< tan ( convertToRadians ( angleOne ) ) << " radians." 
		"\nAngle 2 ( " << angleTwo << " degrees ) has a tangent value of: " 
		<< tan ( convertToRadians ( angleTwo ) ) << " radians." << endl; 
	
	// compare angles
	if ( tan ( convertToRadians ( angleOne ) ) > tan ( convertToRadians ( angleTwo ) ) ) 
		cout << "Angle 1 has the larger tangent value.";
	else if ( tan ( convertToRadians ( angleOne ) ) < tan ( convertToRadians ( angleTwo ) ) )
		cout << "Angle 2 has the larger tangent value.";
	else
		cout << "The angles are equal and consequently, their tangent values are also equal.";
	cout << endl;
	return 0; // indicate successful completion
} // end main

double convertToRadians ( double theAngle )
{
	return theAngle * PI / 180;
}