
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 9
 *
 *
 * Write a program that prompts the user to enter five test scores and then
 * prints the average test score. (Assume that the test scores are decimal
 * numbers).
 */


#include <iostream>

using namespace std;

int main()
{
	double score1, score2, score3, score4, score5, average;

	cout << "Enter five test scores..." << endl;

	cout << "score1: ";
	cin >> score1;

	cout << "score2: ";
	cin >> score2;

	cout << "score3: ";
	cin >> score3;

	cout << "score4: ";
	cin >> score4;

	cout << "score5: ";
	cin >> score5;

	average = (score1 + score2 + score3 + score4 + score5) / 5.0;

	cout << endl
	     << "Average is " << average << endl;

	return 0;
}

