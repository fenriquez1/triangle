/*
 * triangle.cpp
 *
 *  Created on: Jun 6, 2018
 *      Author: Francisco
 */

#include <iostream>
#include <string>


int main(int argc, char *argv[]) {
	int a, b, c;
	std::cout << "Input first positive integer:";
	std::cin >> a;
	std::cout << "Input second positive integer:";
	std::cin >> b;
	std::cout << "Input third positive integer:";
	std::cin >> c;

	std::cout << "Numbers are: " << a << " " << b << " " << c << std::endl;

	int a2 = a * a;
	int b2 = b * b;
	int c2 = c * c;

	std::string triangle;

	if ((a2 + b2) == c2) {
		triangle.append("Right Triangle");
	}
	else if ((a2 + b2) > c2) {
		triangle.append("Acute Triangle");
	}
	else if ((a2 + b2) < c2) {
		triangle.append("Acute Triangle");
	}

	if (a == b && b == c) {
		triangle.append(" & Equilateral Triangle");
	}
	else if ((a == b && b != c) || (a != b && b == c)) {
		triangle.append(" & Isosceles Triangle");
	}
	else {
		triangle.append(" & Scalene Triangle");
	}

	std::cout << "Result = " << triangle << std::endl;


	return 0;
}


