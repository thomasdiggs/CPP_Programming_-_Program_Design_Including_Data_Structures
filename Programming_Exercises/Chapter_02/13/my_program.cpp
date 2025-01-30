
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 13
 *
 *
 * To make a profit, a local store marks up the prices of its items by a cer-
 * tain percentage. Write a C++ program that reads the original price of
 * the item sold, the percentage of the marked-up price, and the sales tax
 * rate. The program then outputs the original price of the item, the per-
 * centage of the mark-up, the store’s selling price of the item, the sales tax
 * rate, the sales tax, and the final price of the item. (The final price of the
 * item is the selling price plus the sales tax.)
 */


#include <iostream>

using namespace std;

int main()
{
	double originalPrice, percentageMarkup, salesTaxRate, sellingPrice, salesTax, finalPrice;

	cout << "Enter originalPrice: ";
	cin >> originalPrice;

	cout << "Enter percentageMarkedUp: ";
	cin >> percentageMarkup;

	cout << "Enter salesTaxRate: ";
	cin >> salesTaxRate;

	sellingPrice = originalPrice + (originalPrice * (percentageMarkup / 100.0));
	salesTax = sellingPrice * (salesTaxRate / 100.0);
	finalPrice = sellingPrice + salesTax;

	cout << endl
	     << "Original Price: $" << originalPrice << endl
	     << "Percentage Mark-up: " << percentageMarkup << "%" << endl
	     << "Selling Price: $" << sellingPrice << endl
	     << "Sales Tax Rate: " << salesTaxRate << "%" << endl
	     << "Sales Tax: $" << salesTax << endl
	     << "Final Price: $" << finalPrice << endl;

	return 0;
}

