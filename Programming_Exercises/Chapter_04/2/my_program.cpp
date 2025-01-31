/* C++ Programming: Program Design Including Data Structures
 * Chapter 4, Programming Exercise 2
 *
 *
 * Write a program that prompts the user to input three numbers. The
 * program should then output the numbers in ascending order.
 */


#include <iostream>

int main()
{
	int num1, num2, num3;

	std::cout << "Enter three numbers separated by whitespace: ";
	std::cin >> num1 >> num2 >> num3;
	std::cout << std::endl;

	if (num1 <= num2 && num2 <= num3)
	{
		std::cout << num1 << " " << num2 << " " << num3 << std::endl;
	}
	else if (num2 <= num1 && num1 <= num3)
	{
		std::cout << num2 << " " << num1 << " " << num3 << std::endl;
	}
	else if (num2 <= num1 && num1 <= num3)
    {
        std::cout << num2 << " " << num1 << " " << num3 << std::endl;
    }
    else if (num2 <= num3 && num3 <= num1)
    {
        std::cout << num2 << " " << num3 << " " << num1 << std::endl;
    }
    else if (num3 <= num1 && num1 <= num2)
    {
        std::cout << num3 << " " << num1 << " " << num2 << std::endl;
    }
    else
    {
        std::cout << num3 << " " << num2 << " " << num1 << std::endl;
    }

	return 0;
}
