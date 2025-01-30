
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 26
 *
 *
 * A room has one door, two windows, and a built-in bookshelf and it needs
 * to be painted. Suppose that one gallon of paint can paint 120 square
 * feet. Write a program that prompts the user to input the lengths and
 * widths of the door, each window, the bookshelf; and the length, width,
 * and height of the room (in feet). The program outputs the amount of
 * paint needed to paint the walls of the room.
 */


#include <iostream>

using namespace std;

const double SQUARE_FOOT_PER_GALLON = 120;

int main()
{
	double doorLength, doorWidth, window1Length, window1Width,
	       window2Length, window2Width, bookshelfLength, bookshelfWidth,
		   roomLength, roomWidth, roomHeight;

	cout << "Separate multiple inputs by a space.\n"
	     << "All units in feet." << endl;
	cout << "Enter door length and width: ";
	cin >> doorLength >> doorWidth;
	cout << "Enter first window length and width: ";
	cin >> window1Length >> window1Width;
	cout << "Enter second window length and width: ";
	cin >> window2Length >> window2Width;
	cout << "Enter bookshelf length and width: ";
	cin >> bookshelfLength >> bookshelfWidth;
	cout << "Enter room length, width, and height: ";
	cin >> roomLength >> roomWidth >> roomHeight;

	double doorArea, window1Area, window2Area, bookshelfArea, totalRoomArea,
	       paintableArea, paintNeeded;

	doorArea = doorLength * doorWidth;
	window1Area = window1Length * window1Width;
	window2Area = window2Length * window2Width;
	bookshelfArea = bookshelfLength * bookshelfWidth;
	totalRoomArea = 2 * (roomLength * roomHeight) + 2 * (roomWidth * roomHeight);

	paintableArea = totalRoomArea - (doorArea + window1Area + window2Area + bookshelfArea);
	paintNeeded = paintableArea / SQUARE_FOOT_PER_GALLON;

	cout << "You need " << paintNeeded << " gallons of paint." << endl;

	return 0;
}

