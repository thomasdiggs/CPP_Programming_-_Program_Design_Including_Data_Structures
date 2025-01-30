
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 7
 *
 *
 * Write a program that prompts the user to input a decimal number and
 * outputs the number rounded to the nearest integer.
 */


#include <iostream>

using namespace std;

int main()
{
	double number;

	cout << "Enter a decimal number: ";
	cin >> number;
	cout << endl;

	cout << "Your number rounded to the nearest ineger: "
	     << static_cast<int>(number + 0.5) << endl;

	return 0;
}

