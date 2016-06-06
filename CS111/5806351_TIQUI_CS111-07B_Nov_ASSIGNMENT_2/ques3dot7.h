/**
 * interface
 **********/
class Polynomial
{
public:
	Polynomial ();
	void inputPolynomial ();
	int degree(); // Returns the degree of the polynomial.
    int coefficient(int); // Returns the coefficient of the xpower term.
    void changeCoefficient(int, int); // Replaces the coefficient of the xpower term with
											       // newCoefficient.
	void printPolynomial (); // outputs polynomial to the display 
private:
	int size;
	int* myArray;
}; // end class Polynomial
