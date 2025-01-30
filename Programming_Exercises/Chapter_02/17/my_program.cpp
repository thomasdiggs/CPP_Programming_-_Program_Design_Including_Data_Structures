
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 16
 *
 * 
 * Redo Programming Exercise 16 so that the user can also input the cost
 * of producing one liter of milk and the profit on each carton of milk.
 */


#include <iostream>

using namespace std;

const double LITERS_IN_MILK_CARTON = 3.78;

int main()
{
	double totalMilkProduced, costToProduceMilk, profitForProducingMilk, costToProduceLiterOfMilk, profitOfEachCartonOfMilk;
	int cartonsNeededToContainMilk;

	cout << "Enter cost to produce one liter of milk: ";
	cin >> costToProduceLiterOfMilk;

	cout << "Enter profit on each carton of milk: ";
	cin >> profitOfEachCartonOfMilk;

	cout << "Enter total milk produced (liters): ";
	cin >> totalMilkProduced;

	cartonsNeededToContainMilk = static_cast<int>(totalMilkProduced / LITERS_IN_MILK_CARTON + 0.5);

	cout << endl;
	cout << "Number of cartons needed to contain milk: " << cartonsNeededToContainMilk << endl;

	costToProduceMilk = totalMilkProduced * costToProduceLiterOfMilk;

	cout << "Cost to produce " << totalMilkProduced << " liters of milk is $" << costToProduceMilk << endl;

	profitForProducingMilk = cartonsNeededToContainMilk * profitOfEachCartonOfMilk;

	cout << "Profit for producing " << cartonsNeededToContainMilk << " cartons of milk is $" << profitForProducingMilk << endl;

	return 0;
}

