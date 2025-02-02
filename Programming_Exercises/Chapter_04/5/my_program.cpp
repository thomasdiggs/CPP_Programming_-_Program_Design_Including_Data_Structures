
/* C++ Programming: Program Design Including Data Structures
 * Chapter 4, Programming Exercise 5
 *
 *
 * In a right triangle, the square of the length of one side is equal to the
 * sum of the squares of the lengths of the other two sides. Write a pro-
 * gram that prompts the user to enter the lengths of three sides of a
 * triangle and then outputs a message indicating whether the triangle is
 * a right triangle.
 */


#include <iostream>
#include <cmath>

int main()
{
    double side1, side2, side3;

    std::cout << "Enter the length of the three sides (separated by a space): ";
    std::cin >> side1 >> side2 >> side3;
    std::cout << std::endl;

    double a, b, c;
    
    if (side1 >= side2 && side1 >= side3) {
        a = side1;
        b = side2;
        c = side3;
    } else if (side2 >= side1 && side2 >= side3) {
        a = side2;
        b = side1;
        c = side3;
    } else {
        a = side3;
        b = side1;
        c = side2;
    }

    if (std::pow(a, 2) == std::pow(b, 2) + std::pow(c, 2)) {
        std::cout << "The triangle is a right triangle." << std::endl;
    } else {
        std::cout << "The triangle is not a right triangle." << std::endl;
    }

    return 0;
}

