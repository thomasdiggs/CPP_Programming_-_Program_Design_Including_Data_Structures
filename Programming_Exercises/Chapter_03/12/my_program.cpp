
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 12
 *
 *
 * Two cars A and B leave an intersection at the same time. Car A ­ travels
 * west at an average speed of x miles per hour and car B travels south at
 * an average speed of y miles per hour. Write a program that prompts the
 * user to enter the average speed of both the cars and the elapsed time
 * (in hours and minutes) and outputs the (shortest) distance between
 * the cars.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double avgSpeedCarA, avgSpeedCarB, elapsedTime, distanceBetweenCars;

	cout << "Enter average speed of car A: ";
	cin >> avgSpeedCarA;
	cout << "Enter average speed of car B: ";
	cin >> avgSpeedCarB;
	cout << "Enter elapsed time: ";
	cin >> elapsedTime;

	distanceBetweenCars = sqrt(pow(avgSpeedCarA * elapsedTime, 2) + pow(avgSpeedCarB * elapsedTime, 2));

	cout << endl << "The distance between the cars is: " << distanceBetweenCars << endl;

	return 0;
}

