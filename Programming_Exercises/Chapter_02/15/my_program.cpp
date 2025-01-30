
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 15
 *
 *
 * Write a program to implement and test the algorithm that you designed for
 * Exercise 15 of Chapter 1. (You may assume that the value of pi is 3.141593.
 * In your program, declare a named constant PI to store this value.)
 */


#include <iostream>

using namespace std;

const double PI = 3.141593;

int main()
{
	double radius, cost, pricePerSquareInch;

	cout << "Enter the radius of the pizza: ";
	cin >> radius;
	cout << "Enter the cost of the pizza: $";
	cin >> cost;

	pricePerSquareInch = cost / (PI * radius * radius);

	cout << endl
	     << "Price per square inch is $" << pricePerSquareInch << endl;

	return 0;
}

