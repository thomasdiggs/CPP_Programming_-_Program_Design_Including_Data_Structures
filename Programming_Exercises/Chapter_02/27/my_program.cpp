
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 27
 *
 *
 * Modify Programming Exercise 26 so that the user can also specify the
 * area that can be painted with one gallon of paint.
 */


#include <iostream>

using namespace std;

int main()
{
	double doorLength, doorWidth, window1Length, window1Width,
	       window2Length, window2Width, bookshelfLength, bookshelfWidth,
		   roomLength, roomWidth, roomHeight;
	double squareFootPerGallon;

	cout << "Separate multiple inputs by a space.\n"
	     << "All units in feet." << endl;
	cout << "Enter the square foot per gallon: ";
	cin >> squareFootPerGallon;
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
	paintNeeded = paintableArea / squareFootPerGallon;

	cout << "You need " << paintNeeded << " gallons of paint." << endl;

	return 0;
}

