
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 4
 *
 *
 * Repeat Programming Exercise 3 by declaring num1, num2, and num3, and
 * average of type double. Store 75.35 into num1, -35.56 into num2, and
 * 15.76 into num3.
 */


#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, average;

	num1 = 75.35;
	num2 = -35.56;
	num3 = 15.76;

	average = (num1 + num2 + num3) / 3;

	cout << "num1: " << num1 << endl
	     << "num2: " << num2 << endl
	     << "num3: " << num3 << endl
	     << "average: " << average << endl;

	return 0;
}

