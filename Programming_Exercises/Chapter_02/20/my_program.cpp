
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 20
 *
 *
 * For each used car a salesperson sells, the commission is paid as follows:
 * $20 plus 30% of the selling price in excess of the cost of the car. Typically,
 * the minimum selling price of the car is the cost of the car plus $200 and the
 * maximum selling price is the cost of the car and $2,000. Write a program
 * that prompts the user to enter the salesperson’s fixed commission, the per-
 * centage of the commission, the purchasing cost of the car, the minimum
 * and maximum amount to be added to the purchasing cost to determine
 * the minimum and maximum selling price, and outputs minimum and
 * maximum selling price of the car and the salesperson’s commission range.
 */


#include <iostream>

using namespace std;

int main()
{
	double commissionFlateRate, commissionPercentageRate, carPurchasePrice,
	       minimumAddedValue, maximumAddedValue, carMinimumSellingPrice,
		   carMaximumSellingPrice, commissionMinimum, commissionMaximum;
	
	cout << "Enter commission flat rate: $";
	cin >> commissionFlateRate;
	cout << "Enter commission percentage rate: ";
	cin >> commissionPercentageRate;
	cout << "Enter car purchase price: $";
	cin >> carPurchasePrice;
	cout << "Enter minimum value added: $";
	cin >> minimumAddedValue;
	cout << "Enter maximum value added: $";
	cin >> maximumAddedValue;

	commissionPercentageRate /= 100.0;

	carMinimumSellingPrice = carPurchasePrice + minimumAddedValue;
	carMaximumSellingPrice = carPurchasePrice + maximumAddedValue;
	commissionMinimum = commissionFlateRate + (carMinimumSellingPrice * commissionPercentageRate);
	commissionMaximum = commissionFlateRate + (carMaximumSellingPrice * commissionPercentageRate);

	cout << endl
	     << "Car minimum selling price is $" << carMinimumSellingPrice << endl
	     << "Car maximum selling price is $" << carMaximumSellingPrice << endl
	     << "Commission range is $" << commissionMinimum << " to $" << commissionMaximum << endl;

	return 0;
}

