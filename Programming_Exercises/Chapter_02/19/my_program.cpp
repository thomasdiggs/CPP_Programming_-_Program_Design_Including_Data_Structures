
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 19
 *
 *
 * Write a program that prompts the user to input the number of quar-
 * ters, dimes, and nickels. The program then outputs the total value of the
 * coins in pennies.
 */


#include <iostream>

using namespace std;

int main()
{
	int quarters, dimes, nickels, pennies;

	cout << "Enter the number of quarters: ";
	cin >> quarters;
	cout << "Enter the number of dimes: ";
	cin >> dimes;
	cout << "Enter the number of nickels: ";
	cin >> nickels;

	pennies = (quarters * 25) + (dimes * 10) + (nickels * 5);

	cout << endl
	     << "Total number of pennies is " << pennies << endl;

	return 0;
}

