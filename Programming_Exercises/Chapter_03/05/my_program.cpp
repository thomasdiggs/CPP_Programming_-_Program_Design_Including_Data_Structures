
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 5
 *
 *
 * Three employees in a company are up for a special pay increase. You
 * are given a file, say Ch3_Ex5Data.txt, with the following data:
 * 
 * Miller Andrew 65789.87 5
 * Green Sheila 75892.56 6
 * Sethi Amit 74900.50 6.1
 *
 * Each input line consists of an employee’s last name, first name, current
 * salary, and percent pay increase. For example, in the first input line,
 * the last name of the employee is Miller, the first name is Andrew,
 * the current salary is 65789.87, and the pay increase is 5%. Write a
 * program that reads data from the specified file and stores the output
 * in the file Ch3_Ex5Output.dat. For each employee, the data must be
 * output in the following form: firstName lastName updatedSalary.
 * Format the output of decimal numbers to two decimal places.
 */


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("Ch3_Ex5Data.txt");
	outFile.open("Ch3_Ex5Output.dat");

	string lastName, firstName;
	double currentSalary, percentPayIncrease, updatedSalary;

	inFile >> lastName >> firstName >> currentSalary >> percentPayIncrease;
	outFile << firstName << " " << lastName << " " << currentSalary + percentPayIncrease * currentSalary << endl;

	inFile >> lastName >> firstName >> currentSalary >> percentPayIncrease;
	outFile << firstName << " " << lastName << " " << currentSalary + percentPayIncrease * currentSalary << endl;

	inFile >> lastName >> firstName >> currentSalary >> percentPayIncrease;
	outFile << firstName << " " << lastName << " " << currentSalary + percentPayIncrease * currentSalary << endl;

	inFile.close();
	outFile.close();

	return 0;
}

