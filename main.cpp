#include "Poly.h"
#include <iostream>

void testAddition(const Poly& p1, const Poly& p2) {
	Poly p = (p1 + p2);
	std::cout << "Sum of polynomials p1 and p2: " << p << std::endl;
	
	p = (p1 + 3.1);
	std::cout << "Sum of polynomial p1 and 3.1: " << p << std::endl;

	p = 3.1 + p1;
	std::cout << "Sum of 3.1 and polynomial p1: " << p << std::endl;
}

void testSubtraction(const Poly& p1, const Poly& p2) {
	std::cout << "Difference of polynomials p1 and p2: " << p1 - p2 << std::endl;
	std::cout << "Difference of polynomials p1 and p1: " << p1 - p1 << std::endl;	// Should display 0 (not 0x^3 + 0x + 0)
	std::cout << "Difference of polynomial p1 and 7.2: " << p1 - 7.2 << std::endl;
	std::cout << "Difference of 7.2 and polynomial p1: " << 7.2 - p1 << std::endl;
}

int main()
{
    Poly p1;															// Declare object representing polynomial p1	
	p1[3] = 2;															// Specify coefficients of p1 = 2x^3 + 3.6x + 7
	p1[1] = 3.6;
	p1[0] = 7;

    Poly p2 = 5;													// Declare object representing polynomial p2 = 5
	p2[4] = 1;															// Specify additional coefficients of p2 = x^4 - 6x^2 + 3x + 5
	p2[2] = -6;
	p2[1] = 3;

	std::cout << p1 << "\n" << p2 << "\n" << p1 * p2 << "\n";
    return 0;
}