
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 10
 *
 *
 * Write a program that prompts the user to input five decimal numbers.
 * The program should then add the five decimal numbers, convert the
 * sum to the nearest integer, and print the result.
 */


#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5;
	int sum;

	cout << "Enter five numbers seperated by a space: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << endl;

	sum = static_cast<int>((num1 + num2 + num3 + num4 + num5) / 5 + 0.5);

	cout << "The sum rounded to the nearest ineger is " << sum << endl;

	return 0;
}

