
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 9
 *
 *
 * Dairy Farm decided to ship milk in containers in the form of cubes rather
 * than cylinders. Write a program that prompts the user to input the
 * radius of the base and the height of a cylindrical container and outputs
 * the side of the cube with the same volume as the cylindrical container.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double radius, height;

	cout << "Enter radius: ";
	cin >> radius;
	cout << "Enter height: ";
	cin >> height;

	double volume = M_PI * pow(radius, 2) * height;
	double side = cbrt(volume);

	cout << "Result: " << side << endl;

	return 0;
}

