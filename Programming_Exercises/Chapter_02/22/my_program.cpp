
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 22
 *
 *
 * One metric ton is approximately 2,205 pounds. Write a program that
 * prompts the user to input the amount of rice, in pounds, a bag can hold.
 * The program outputs the number of bags needed to store one metric
 * ton of rice.
 */


#include <iostream>

using namespace std;

const double POUNDS_PER_TON = 2205.0;

int main()
{
    double bagWeight;

    cout << "Enter the weight of a bag of rice in pounds: ";
    cin >> bagWeight;

    cout << endl
         << "You would need " << POUNDS_PER_TON / bagWeight << " bags to store one metric ton of rice." << endl;

    return 0;
}

