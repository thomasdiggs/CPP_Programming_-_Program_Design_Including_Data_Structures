
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 18
 * 
 *
 * You found an exciting summer job for five weeks. It pays, say, $15.50 per
 * hour. Suppose that the total tax you pay on your summer job income is
 * 14%. After paying the taxes, you spend 10% of your net income to buy
 * new clothes and other accessories for the next school year and 1% to buy
 * school supplies. After buying clothes and school supplies, you use 25%
 * of the remaining money to buy savings bonds. For each dollar you spend
 * to buy savings bonds, your parents spend $0.50 to buy additional savings
 * bonds for you. Write a program that prompts the user to enter the pay
 * rate for an hour and the number of hours you worked each week. The
 * program then outputs the following:
 * 
 * a. Your income before and after taxes from your summer job.
 *
 * b. The money you spend on clothes and other accessories.
 *
 * c. The money you spend on school supplies.
 *
 * d. The money you spend to buy savings bonds.
 *
 * e. The money your parents spend to buy additional savings bonds for
 *    you.
 */


#include <iostream>

using namespace std;

const double TAX_RATE = 14 / 100.0;
const double ACCESSORY_RATE = 10 / 100.0;
const double SUPPLIES_RATE = 1 / 100.0;
const double SAVINGS_RATE = 25 / 100.0;
const double SAVINGS_PER_DOLLAR_MATCH = 0.50;

int main()
{
	double payRate, hoursWorked, preTaxIncome, postTaxIncome, amountSpentOnAccessories,
	       amountSpentOnSupplies, amountSaved, amountMatchedOnSavings;

	cout << "Enter hourly pay rate: $";
	cin >> payRate;
	cout << "Enter hours worked: ";
	cin >> hoursWorked;

	preTaxIncome = payRate * hoursWorked;
	postTaxIncome = preTaxIncome - (preTaxIncome * TAX_RATE);

	cout << endl
	     << "Pre-tax income: $" << preTaxIncome << endl
	     << "Post-tax income: $" << postTaxIncome << endl;

	amountSpentOnAccessories = postTaxIncome * ACCESSORY_RATE;

	cout << "Amount spent on accessories: $" << amountSpentOnAccessories << endl;

	amountSpentOnSupplies = postTaxIncome * SUPPLIES_RATE;

	cout << "Amount spent on supplies: $" << amountSpentOnSupplies << endl;

	amountSaved = (postTaxIncome - amountSpentOnAccessories - amountSpentOnSupplies) * SAVINGS_RATE;

	cout << "Amount saved: $" << amountSaved << endl;

	amountMatchedOnSavings = static_cast<int>(amountSaved) * SAVINGS_PER_DOLLAR_MATCH;

	cout << "Amount matched on savings: $" << amountMatchedOnSavings << endl;

	return 0;
}

