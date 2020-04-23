/*
Implement the function findRoots to find the roots of the quadratic equation: ax2 + bx + c = 0. 
If the equation has only one solution, the function should return that solution as both elements of the pair. 
The equation will always have at least one solution.

For example, the roots of the equation 2x2 + 10x + 8 = 0 are -1 and -4.
*/

#include <tuple>
#include <stdexcept>
#include <iostream>
#include <string>

std::pair<double, double> findRoots(double a, double b, double c)
{
	auto r1 = (-b + sqrtl(b*b - 4 * a*c)) / (2 * a);
	auto r2 = (-b - sqrtl(b*b - 4 * a*c)) / (2 * a);
	return std::pair<double, double>(r1, r2);
}

#ifndef RunTests
void main_1()
{
	std::pair<double, double> roots = findRoots(2, 10, 8);
	std::cout << "Roots: " + std::to_string(roots.first) + ", " + std::to_string(roots.second);
}
#endif