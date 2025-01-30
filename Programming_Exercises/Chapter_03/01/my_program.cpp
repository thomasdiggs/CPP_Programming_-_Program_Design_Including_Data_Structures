
/* C++ Programming: Program Design Including Data Structures
 * Chapter 3, Programming Exercise 1
 *
 *
 * Consider the following incomplete C11 program:
 *
 *     #include <iostream>
 *
 *     int main()
 *     {
 *         ...
 *     }
 *
 * a. Write a statement that includes the header files fstream, string,
 *    and iomanip in this program.
 *
 * b. Write statements that declare inFile to be an ifstream variable
 *    and outFile to be an ofstream variable.
 * 
 * c. The program will read data from the file inData.txt and write
 *    output to the file outData.txt. Write statements to open both of
 *    these files, associate inFile with inData.txt, and associate out-
 *    File with outData.txt.
 *
 * d. Suppose that the file inData.txt contains the following data:
 *
 *    Giselle Robinson Accounting
 *    5600 5 30
 *    450 9
 *    75 1.5
 *
 *    The first line contains a person’s first name, last name, and the
 *    department the person works in. In the second line, the first num-
 *    ber represents the monthly gross salary, the bonus (as a percent),
 *    and the taxes (as a percent). The third line contains the distance
 *    traveled and the traveling time. The fourth line contains the num-
 *    ber of coffee cups sold and the cost of each coffee cup. Write state-
 *    ments so that after the program executes, the contents of the file
 *    outData.txt are as shown below. If necessary, declare additional
 *    variables. Your statements should be general enough so that if the
 *    content of the input file changes and the program is run again (with-
 *    out editing and recompiling), it outputs the appropriate results.
 *
 *    Name: Giselle Robinson, Department: Accounting
 *    Monthly Gross Salary: $5600.00, Monthly Bonus: 5.00%, Taxes: 30.00%
 *    Paycheck: $4116.00
 *    Distance Traveled: 450.00 miles, Traveling Time: 9.00 hours
 *    Average Speed: 50.00 miles per hour
 *    Number of Coffee Cups Sold: 75, Cost: $1.50 per cup
 *    Sales Amount = $112.50
 *
 * e. Write statements that close the input and output files.
 *
 * f. Write a C11 program that tests the statements in parts a through e.
 */


#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;

	inFile.open("inData.txt");
	outFile.open("outData.txt");

	string firstName, lastName, department;
	double monthlyGrossSalary, bonusPercent, taxesPercent,
	       distanceTraveled, timeTraveled, costOfEachCoffeeCup,
		   averageSpeed, salesAmount;
	int numberOfCoffeeCupsSold;

	inFile >> firstName >> lastName >> department
	       >> monthlyGrossSalary >> bonusPercent >> taxesPercent
	       >> distanceTraveled >> timeTraveled
	       >> numberOfCoffeeCupsSold >> costOfEachCoffeeCup;

	averageSpeed = distanceTraveled / timeTraveled;
	salesAmount = numberOfCoffeeCupsSold * costOfEachCoffeeCup;

	outFile << fixed << showpoint << setprecision(2);
	outFile << "Name: " << firstName << " " << lastName << ", "
	        << "Department: " << department << endl
	        << "Monthly Gross Salary: $" << monthlyGrossSalary << ", "
	        << "Monthly Bonus: " << bonusPercent << "%, "
	        << "Taxes: " << taxesPercent << "%" << endl
	        << endl
	        << "Distance Traveled: " << distanceTraveled << " miles, "
	        << "Traveling Time: " << timeTraveled << " hours" << endl
	        << "Average Speed: " << averageSpeed << " miles per hour" << endl
	        << endl
	        << "Number of Coffee Cups Sold: " << numberOfCoffeeCupsSold << ", "
	        << "Cost: $" << costOfEachCoffeeCup << " per cup" << endl
	        << "Sales Amount = $" << salesAmount << endl;

	inFile.close();
	outFile.close();

	return 0;
}

