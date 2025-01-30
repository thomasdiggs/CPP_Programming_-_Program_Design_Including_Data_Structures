
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 8
 *
 *
 * Linda is starting a new cosmetic and clothing business and would like
 * to make a net profit of approximately 10% after paying all the expenses,
 * which include merchandise cost, store rent, employees’ salary, and
 * electricity cost for the store. She would like to know how much the
 * merchandise should be marked up so that after paying all the expenses
 * at the end of the year she gets approximately 10% net profit on the mer-
 * chandise cost. Note that after marking up the price of an item she would
 * like to put the item on 15% sale. Write a program that prompts Linda
 * to enter the total cost of the merchandise, the salary of the employees
 * (including her own salary), the yearly rent, and the estimated electric-
 * ity cost. The program then outputs how much the merchandise should
 * be marked up so that Linda gets the desired profit.
 */


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double merchandiseCost, employeeSalary, yearlyRent, electricityCost,
	       totalExpenses, desiredProfit, totalRevenueNeeded, revenueBeforeDiscount;

	cout << "Enter merchandiseCost: ";
	cin >> merchandiseCost;
	cout << "Enter employeeSalary: ";
	cin >> employeeSalary;
	cout << "Enter yearlyRent: ";
	cin >> yearlyRent;
	cout << "Enter electricityCost: ";
	cin >> electricityCost;

	totalExpenses = employeeSalary + yearlyRent + electricityCost;
	desiredProfit = 0.10 * merchandiseCost;
	totalRevenueNeeded = merchandiseCost + totalExpenses + desiredProfit;
	revenueBeforeDiscount = totalRevenueNeeded / (1 - 0.15);
	
	cout << "The merchandise should be marked up by "
	     << ((revenueBeforeDiscount - merchandiseCost) / merchandiseCost) * 100
		 << " percent" << endl;

	return 0;
}

