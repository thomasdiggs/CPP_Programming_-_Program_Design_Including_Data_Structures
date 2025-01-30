
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 24
 *
 *
 * A piece of wire is to be bent in the form of a rectangle to put around a
 * picture frame. The length of the picture frame is 1.5 times the width.
 * Write a program that prompts the user to input the length of the wire
 * and outputs the length and width of the picture frame.
 */
 

#include <iostream>

using namespace std;

int main() {
	int wireLength;
	double frameLength, frameWidth;

	cout << "Input the length of the wire: ";
	cin >> wireLength;
	cout << endl;

	frameWidth = wireLength / 5.0;
	frameLength = 1.5 * frameWidth;

	cout << "Frame width is " << frameWidth << endl
	     << "Frame length is " << frameLength << endl;

	return 0;
}

