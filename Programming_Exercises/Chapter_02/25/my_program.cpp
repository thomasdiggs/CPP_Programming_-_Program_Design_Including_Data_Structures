
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 25
 *
 *
 * Repeat Programming Exercise 24, but the wire is to be bent in the form
 * of a circle. In this case, the user specifies the length of the wire and the
 * program outputs the radius and area of the circle. (You may assume that
 * π = 3.1416. Also declare it as a named constant.)
 */


#include <iostream>

using namespace std;

const double PI = 3.1416;

int main() {
	int length;
	double radius, area;

	cout << "Input length: ";
	cin >> length;
	cout << endl;

	radius = length / (2 * PI);
	area = PI * (radius * radius);

	cout << "Radius is " << radius << endl
	     << "Area is " << area << endl;

	return 0;
}

