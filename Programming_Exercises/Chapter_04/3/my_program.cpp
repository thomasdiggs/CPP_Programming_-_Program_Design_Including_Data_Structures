
/* C++ Programming: Program Design Including Data Structures
 * Chapter 4, Programming Exercise 3
 *
 *
 * Write a program that prompts the user to input an integer between
 * 0 and 35. If the number is less than or equal to 9, the program should
 * output the number; otherwise, it should output A for 10, B for 11, C for
 * 12, . . . , and Z for 35. (Hint: Use the cast operator, static_cast<char>(),
 * for numbers >= 10.)
 */


#include <iostream>

int main()
{
	int number;

	std::cout << "Enter a number between 0 and 35: ";
	std::cin >> number;
	std::cout << std::endl;

	if (number <= 9)
	{
		std::cout << number << std::endl;
	}
	else
	{
		std::cout << static_cast<char>(number + 55) << std::endl;
	}

	return 0;
}

