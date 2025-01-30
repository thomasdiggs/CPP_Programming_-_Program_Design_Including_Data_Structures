
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 16
 *
 * 
 * A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm
 * ships cartons of milk to a local grocery store. The cost of producing one
 * liter of milk is $0.38, and the profit of each carton of milk is $0.27. Write
 * a program that does the following:
 * 
 * a. Prompts the user to enter the total amount of milk produced in the
 *    morning.
 * 
 * b. Outputs the number of milk cartons needed to hold milk. (Round
 *    your answer to the nearest integer.)
 * 
 * c. Outputs the cost of producing milk.
 * 
 * d. Outputs the profit for producing milk.
 */


#include <iostream>

using namespace std;

const double LITERS_IN_MILK_CARTON = 3.78;
const double COST_TO_PRODUCE_LITER_OF_MILK = 0.38;
const double PROFIT_OF_EACH_CARTON_OF_MILK = 0.27;

int main()
{
	double totalMilkProduced, costToProduceMilk, profitForProducingMilk;
	int cartonsNeededToContainMilk;

	cout << "Enter total milk produced (liters): ";
	cin >> totalMilkProduced;

	cartonsNeededToContainMilk = static_cast<int>(totalMilkProduced / LITERS_IN_MILK_CARTON + 0.5);

	cout << endl
	     << "Number of cartons needed to contain milk: " << cartonsNeededToContainMilk << endl;

	costToProduceMilk = totalMilkProduced * COST_TO_PRODUCE_LITER_OF_MILK;

	cout << "Cost to produce " << totalMilkProduced << " liters of milk is $" << costToProduceMilk << endl;

	profitForProducingMilk = cartonsNeededToContainMilk * PROFIT_OF_EACH_CARTON_OF_MILK;

	cout << "Profit for producing " << cartonsNeededToContainMilk << " cartons of milk is $" << profitForProducingMilk << endl;

	return 0;
}

