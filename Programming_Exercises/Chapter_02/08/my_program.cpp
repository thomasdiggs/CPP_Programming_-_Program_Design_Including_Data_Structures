
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 8
 *
 *
 * Consider the following program segment:
 * 
 *     //include statement(s)
 *     //using namespace statement
 * 
 *     int main()
 *     {
 *         //variable declaration
 * 
 *         //executable statements
 * 
 *         //return statement
 *     }
 * 
 * a. Write C++ statements that include the header files iostream and string.
 * 
 * b. Write a C+ statement that allows you to use cin, cout, and endl
 *    without the prefix std::.
 * 
 * c. Write C++ statements that declare and initialize the following
 *    named constants: SECRET of type int initialized to 11 and RATE of
 *    type double initialized to 12.50.
 * 
 * d. Write C++ statements that declare the following variables:
 *    num1, num2, and newNum of type int; name of type string; and
 *    hoursWorked and wages of type double.
 * 
 * e. Write C++ statements that prompt the user to input two integers
 *    and store the first number in num1 and the second number in num2.
 * 
 * f. Write a C++ statement(s) that outputs the values of num1 and num2,
 *    indicating which is num1 and which is num2. For example, if num1 is
 *    8 and num2 is 5, then the output is:
 * 
 *    The value of num1 = 8 and the value of num2 = 5.
 * 
 * g. Write a C++ statement that multiplies the value of num1 by 2,
 *    adds the value of num2 to it, and then stores the result in newNum.
 *    Then, write a C++ statement that outputs the value of newNum.
 * 
 * h. Write a C++ statement that updates the value of newNum by adding
 *    the value of the named constant SECRET to it. Then, write a C++ state-
 *    ment that outputs the value of newNum with an appropriate message.
 * 
 * i. Write C+ statements that prompt the user to enter a person’s last
 *    name and then store the last name into the variable name.
 * 
 * j. Write C++ statements that prompt the user to enter a decimal
 *    number between 0 and 70 and then store the number entered into
 *    hoursWorked.
 * 
 * k. Write a C++ statement that multiplies the value of the named con-
 *    stant RATE with the value of hoursWorked and then stores the result
 *    into the variable wages.
 * 
 * l. Write C++ statements that produce the following output:
 * 
 *    Name:                //output the value of the variable name
 *    Pay Rate: $          //output the value of the RATE
 *    Hours Worked:        //output the value of the variable
 *                         //hoursWorked
 *    Salary: $            //output the value of the variable
 *                         //wages
 * 
 *    For example, if the value of name is "Rainbow" and hoursWorked is
 *    45.50, then the output is:
 * 
 *    Name: Rainbow
 *    Pay Rate: $12.50
 *    Hours Worked: 45.50
 *    Salary: $568.75
 * 
 * m. Write a C++ program that tests each of the C++ statements that
 *    you wrote in parts a through l. Place the statements at the appropri-
 *    ate place in the C++ program segment given at the beginning of this
 *    problem. Test run your program (twice) on the following input data:
 * 
 *    a. num1 = 13, num2 = 28; name = "Jacobson";
 *       hours­ Worked = 48.30.
 * 
 *    b. num1 = 32, num2 = 15; name = "Crawford";
 *       hours­ Worked = 58.45.
 */


#include <iostream>
#include <string>

using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;

	cout << "Input first integer: ";
	cin >> num1;
	cout << "Input second integer: ";
	cin >> num2;
	cout << endl;

	cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;

	newNum = num1 * 2 + num2;

	cout << "The value of newNum = " << newNum << endl;

	newNum += SECRET;

	cout << "The value of newNum plus SECRET = " << newNum << endl << endl;

	cout << "Input your last name: ";
	cin >> name;

	cout << "Enter a decimal number between 0 and 70: ";
	cin >> hoursWorked;
	cout << endl;

	wages = hoursWorked * RATE;

	cout << "Name: " << name << endl
	     << "Pay Rate: $" << RATE << endl
	     << "Hours Worked: " << hoursWorked << endl
	     << "Salary: $" << wages << endl;

	return 0;
}

