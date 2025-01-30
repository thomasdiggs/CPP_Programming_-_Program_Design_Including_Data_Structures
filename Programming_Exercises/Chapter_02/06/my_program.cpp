
/* C++ Programming: Program Design Including Data Structures
 * Chapter 2, Programming Exercise 6
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
 * a. Write C++ statements that include the header files iostream and
 *    string.
 * 
 * b. Write a C++ statement that allows you to use cin, cout, and endl
 *    without the prefix std::.
 * 
 * c. Write C++ statements that declare the following variables: name of
 *    type string and studyHours of type double.
 * 
 * d. Write C++ statements that prompt and input a string into name
 *    and a double value into studyHours.
 * 
 * e. Write a C++ statement that outputs the values of name and
 *    studyHours with the appropriate text. For example, if the value of
 *    name is "Donald" and the value of studyHours is 4.5, the output is:
 * 
 *    Hello, Donald! on Saturday, you need to study 4.5 hours for the exam.
 * 
 * f. Compile and run your program.
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	double studyHours;

	cout << "Input name: ";
	cin >> name;

	cout << "Input studyHours: ";
	cin >> studyHours;
	cout << endl;

	cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours
	     << " hours for the exam." << endl;

	return 0;
}

