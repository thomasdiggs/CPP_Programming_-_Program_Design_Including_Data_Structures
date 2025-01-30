
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 6
 *
 *
 * Write a program that accepts as input the mass, in grams, and density,
 * in grams per cubic centimeters, and outputs the volume of the object
 * using the formula: volume = mass / density. Format your output to
 * two decimal places.
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double mass, density;

	cout << "Enter mass, in grams: ";
	cin >> mass;
	cout << "Enter density, in grams per cubic centimeters: ";
	cin >> density;
	cout << endl;

	cout << fixed << showpoint << setprecision(2);
	cout << "Volume is " << mass / density << endl;

	return 0;
}

