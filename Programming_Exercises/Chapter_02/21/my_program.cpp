
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercises 21
 *
 *
 * Newton’s law states that the force, F, between two bodies of masses and 2
 * M is given by:
 * 
 * F = k * (m1 * m2 / d^2)
 * 
 * in which k is the gravitational constant and d is the distance between the
 * bodies. The value of k is approximately 6.67e-8 dyn. cm^2/g^2. Write
 * a program that prompts the user to input the masses of the bodies and
 * the distance between the bodies. The program then outputs the force
 * between the bodies.
 */
 

#include <iostream>

using namespace std;

double const K = 6.67e-8;

int main()
{
    double m1, m2, d, F;

	cout << "Enter mass of first body: ";
	cin >> m1;
	cout << "Enter mass of second body: ";
	cin >> m2;
	cout << "Enter distance between bodies: ";
	cin >> d;

	F = K * (m1 * m2 / (d * d));

	cout << endl
	     << "F = " << F << endl;

    return 0;
}

