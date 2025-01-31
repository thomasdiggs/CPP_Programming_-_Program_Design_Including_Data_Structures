/* C++ Programming: Program Design Including Data Structures
 * Chapter 4, Programming Exercise 1
 *
 *
 * Write a program that prompts the user to input a number. The pro-
 * gram should then output the number and a message saying whether
 * the number is positive, negative, or zero.
 */


#include <iostream>

int main()
{
	int input;

	std::cout << "Input a number: ";
	std::cin >> input;
	std::cout << std::endl;
	
	if (input > 0)
	{
		std::cout << "Your number is positive." << std::endl;
	}
	else if (input < 0)
	{
		std::cout << "Your number is negative." << std::endl;
	}
	else
	{
		std::cout << "Your number is zero." << std::endl;
	}

    return 0;
}
