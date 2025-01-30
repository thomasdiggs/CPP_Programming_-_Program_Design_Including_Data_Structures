
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 12
 *
 *
 * Write a C++ program that prompts the user to input the elapsed time
 * for an event in seconds. The program then outputs the elapsed time in
 * hours, minutes, seconds. (For example, if the elapsed time is 9,630
 * seconds, then the output is 2:40:30.)
 */


#include <iostream>

using namespace std;

int main()
{
	int input, hours, minutes, seconds;

	cout << "Enter elapsed time in seconds: ";
	cin >> input;

	hours = input / 3600;
	minutes = (input % 3600) / 60;
	seconds = input % 60;

	cout << endl
	     << "Elapsed time in hours, minutes, seconds is "
	     << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}

