
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 11
 *
 *
 * Write a program that prompts the capacity, in gallons, of an automo-
 * bile fuel tank and the miles per gallon the automobile can be driven.
 * The program outputs the number of miles the automobile can be driven
 * without refueling.
 */


#include <iostream>

using namespace std;

int main()
{
	double capacityInGallons, milesPerGallon, range;

	cout << "Enter fuel capacity: ";
	cin >> capacityInGallons;
	cout << "Enter miles per gallon: ";
	cin >> milesPerGallon;

	range = milesPerGallon * capacityInGallons;
	
	cout << endl
	     << "Range: " << range << endl;

	return 0;
}

