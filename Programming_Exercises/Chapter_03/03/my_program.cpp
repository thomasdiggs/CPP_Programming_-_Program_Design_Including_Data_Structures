
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 3
 *
 *
 * Write a program that prompts the user to enter the weight of a person
 * in kilograms and outputs the equivalent weight in pounds. Output both
 * the weights rounded to two decimal places. (Note that 1 kilogram =
 * 2.2 pounds.) Format your output with two decimal places.
 */


#include <iostream>
#include <iomanip>

using namespace std;

const double KILOGRAM_TO_POUNDS = 2.2;

int main()
{
	double weightKilograms;

	cout << "Enter weight in kilograms: ";
	cin >> weightKilograms;
	cout << endl;

	cout << fixed << showpoint << setprecision(2);
	cout << "Weight in pounds is " <<  weightKilograms * KILOGRAM_TO_POUNDS << endl;

	return 0;
}

