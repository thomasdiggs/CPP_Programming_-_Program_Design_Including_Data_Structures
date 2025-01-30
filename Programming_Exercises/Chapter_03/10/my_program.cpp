
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 10
 *
 *
 * Paula and Danny want to plant evergreen trees along the back side
 * of their yard. They do not want to have an excessive number of trees.
 * Write a program that prompts the user to input the following:
 * 
 * a. The length of the yard.
 *
 * b. The radius of a fully grown tree.
 *
 * c. The required space between fully grown trees.
 *
 * The program outputs the number of trees that can be planted in the
 * yard and the total space that will be occupied by the fully grown trees.
 */


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double lengthOfYard, radiusOfTree, requiredSpace;

	cout << "Enter the length of the yard: ";
	cin >> lengthOfYard;
	cout << "Enter the radius of a fully grown tree: ";
	cin >> radiusOfTree;
	cout << "Enter the required space between fully grown trees: ";
	cin >> requiredSpace;

	int numberOfTreesPlanted = lengthOfYard / ((radiusOfTree * 2) + requiredSpace);
	double totalSpaceOccupied = numberOfTreesPlanted * (M_PI * pow(radiusOfTree, 2));

	cout << fixed << showpoint << setprecision(2);
	cout << "The number of trees that can be planted is " << numberOfTreesPlanted << endl;
	cout << "The total space occupied by the trees is " << totalSpaceOccupied << endl;

	return 0;
}

