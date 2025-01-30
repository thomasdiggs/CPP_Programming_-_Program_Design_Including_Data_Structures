
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 7
 *
 *
 * Interest on a credit card’s unpaid balance is calculated using the
 * average daily balance. Suppose that netBalance is the balance shown
 * in the bill, payment is the payment made, d1 is the number of days in
 * the billing cycle, and d2 is the number of days payment is made before
 * billing cycle. Then, the average daily balance is:
 *
 * averageDailyBalance = (netBalance * d1 – payment * d2) / d1
 * 
 * If the interest rate per month is, say, 0.0152, then the interest on the
 * unpaid balance is:
 * 
 * interest = averageDailyBalance * 0.0152
 * 
 * Write a program that accepts as input netBalance, payment, d1, d2,
 * and interest rate per month. The program outputs the interest. Format
 * your output to two decimal places.
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double netBalance, payment, d1, d2, averageDailyBalance,
	       interest, interestRate;

	cout << "Enter netBalance: ";
	cin >> netBalance;
	cout << "Enter payment: ";
	cin >> payment;
	cout << "Enter d1: ";
	cin >> d1;
	cout << "Enter d2: ";
	cin >> d2;
	cout << "Enter interestRate: ";
	cin >> interestRate;

	averageDailyBalance = (netBalance * d1 - payment * d2) / d1;
	interest = averageDailyBalance * interestRate;

	cout << fixed << showpoint << setprecision(2);
	cout << endl;
	cout << "Interest is $" << interest << endl;

	return 0;
}

