
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 28
 *
 *
 * In an elementary school, a mixture of equal amounts of nuts and dried
 * fruit is provided during lunch. Suppose that the number of calories in
 * each pound of nuts is 0.70 times the number of calories in each pound of
 * dried fruit. Write a program that prompts the user to input the number
 * of students in the elementary school, the number of calories required
 * for each student from the mixture, and the number of calories in each
 * pound of nuts. The program outputs the amount of nuts and dried
 * fruit needed for the students. (For simplicity, assume that each student
 * requires the same amount of calories.)
 */


#include <iostream>

using namespace std;

int main()
{
	double numberOfStudents, caloriesPerStudent, caloriesPerPoundOfNuts,
	       caloriesPerPoundOfFruit, totalCaloriesRequired, caloriesPerPoundOfMixture,
	       totalWeightOfMixture, weightOfEachNutsAndFruitNeeded;

	cout << "Enter the number of students: ";
	cin >> numberOfStudents;
	cout << "Enter the calories required for each student from the mixture: ";
	cin >> caloriesPerStudent;
	cout << "Enter the calories per pound of nuts: ";
	cin >> caloriesPerPoundOfNuts;

	caloriesPerPoundOfFruit = caloriesPerPoundOfNuts / 0.70;
	totalCaloriesRequired = numberOfStudents * caloriesPerStudent;
	caloriesPerPoundOfMixture = (caloriesPerPoundOfFruit + caloriesPerPoundOfNuts) / 2.0;
	totalWeightOfMixture = totalCaloriesRequired / caloriesPerPoundOfMixture;
	weightOfEachNutsAndFruitNeeded = totalWeightOfMixture / 2.0;

	cout << "The weight of nuts and dried fruit required is "
	     << weightOfEachNutsAndFruitNeeded << " pounds each." << endl;

	return 0;
}

