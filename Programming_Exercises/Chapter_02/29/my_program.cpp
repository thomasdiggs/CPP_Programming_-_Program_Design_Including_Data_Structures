
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 29
 *
 *
 * A contractor orders, say, 30 cubic yards of premixed concrete to con-
 * struct a patio that is to be, say, four inches thick. The length of the patio
 * is to be, say, twice the width. Write a program that prompts the user
 * to specify the amount of premixed concrete (in cubic yards) ordered,
 * the thickness of the patio (in inches), and the ratio of length and width.
 * The program then outputs the length and width of the patio (in feet).
 * (1 cubic yard 5 27 cubic feet.) (To find the square root of a decimal
 * number, include the header file cmath using the statement #include
 * <cmath>, in your program. The function sqrt, included in this header
 * file, determines the square root of a decimal number. For example,
 * sqrt(16.0) = 4.0.)
 */


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double cubicYards, thicknessInInches, ratio;
    
    cout << "Enter the amount of premixed concrete (in cubic yards): ";
    cin >> cubicYards;
    cout << "Enter the thickness of the patio (in inches): ";
    cin >> thicknessInInches;
    cout << "Enter the ratio of length to width of the patio: ";
    cin >> ratio;

    double volumeInFeet = cubicYards * 27;
    double thicknessInFeet = thicknessInInches / 12;
    double area = volumeInFeet / thicknessInFeet;
    double width = sqrt(area / ratio);
    double length = ratio * width;

	cout << endl;
    cout << "The dimensions of the patio are:" << endl;
    cout << "Length: " << length << " feet" << endl;
    cout << "Width: " << width << " feet" << endl;

	return 0;
}

