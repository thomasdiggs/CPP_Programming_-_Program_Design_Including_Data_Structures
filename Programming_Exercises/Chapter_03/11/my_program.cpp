
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 11
 *
 *
 * A size of a jumbo candy bar with rectangular shape is l × w × h. Due
 * to rising costs of coca, the volume of the candy bar is to be reduced by
 * p%. To accomplish this, the management decided to keep the thick-
 * ness, h, of the candy bar the same, and reduce the length and width
 * by the same amount. For example, if l = 12, w = 7, h = 3, and p = 10,
 * then the new dimension of the candy bar is 11.39 × 6.64 × 3. Write a
 * program to accomplish this.
 */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double length, width, height, percent, originalVolume, newVolume,
	       reductionFactor, newLength, newWidth;

	cout << "Seperate each input by a space" << endl
	     << "Enter the length, width, height, and precent: ";
	cin >> length >> width >> height >> percent;

	originalVolume = length * width * height;
	newVolume = (1 - percent / 100.0) * originalVolume;

	reductionFactor = 1 - sqrt(newVolume / originalVolume);
	newLength = length * (1 - reductionFactor);
	newWidth = width * (1 - reductionFactor);

	cout << "New length is: " << newLength << endl
	     << "New width is: " << newWidth << endl;

	return 0;
}

