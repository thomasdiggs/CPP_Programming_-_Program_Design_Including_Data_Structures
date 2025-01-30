
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 2
 *
 *
 * Consider the following program in which the statements are in the
 * incorrect order. Rearrange the statements so that the program prompts
 * the user to input the height and the radius of the base of a cylinder and
 * outputs the volume and surface area of the cylinder. Format the output
 * to two decimal places.
 * 
 *     #include <iomanip>
 *     #include <cmath>
 *
 *     int main()
 *     {}
 *         double height;
 *
 *         cout << "Volume of the cylinder = "
 *         << PI * pow(radius, 2.0) * height << endl;
 *
 *         cout << "Enter the height of the cylinder: ";
 *         cin >> radius;
 *         cout << endl;
 *
 *         return 0;
 *
 *         double radius;
 *
 *         cout << "Surface area: "
 *         << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
 *         << endl;
 *         cout << fixed << showpoint << setprecision(2);
 *
 *         cout << "Enter the radius of the base of the cylinder: ";
 *         cin >> height;
 *         cout << endl;
 *
 *     #include <iostream>
 *     const double PI = 3.14159;
 *
 *     using namespace std;
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
	double height;
	double radius;

	cout << "Enter the height of the cylinder: ";
 	cin >> radius;
 	cout << endl;

	cout << "Enter the radius of the base of the cylinder: ";
 	cin >> height;
 	cout << endl;

 	cout << fixed << showpoint << setprecision(2);
	cout << "Surface area: "
 	     << 2 * PI * radius * height + 2 * PI * pow(radius, 2.0)
 	     << endl;
	cout << "Volume of the cylinder = "
 	     << PI * pow(radius, 2.0) * height << endl;

	return 0;
}

