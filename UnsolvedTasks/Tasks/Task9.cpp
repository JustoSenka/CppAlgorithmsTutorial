/*
Implement the unique_names method. When passed two vectors of names, it will return a vector containing the names that appear in either or both vectors.
The returned vector should have no duplicates.

For example, calling unique_names(std::vector<std::string>{"Ava", "Emma", "Olivia"}, std::vector<std::string>{"Olivia", "Sophia", "Emma"}) 
should return a vector containing Ava, Emma, Olivia, and Sophia in any order.
*/

#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
	throw std::logic_error("Waiting to be implemented");
}

#ifndef RunTests
void main_9()
{
	std::vector<std::string> names1 = { "Ava", "Emma", "Olivia" };
	std::vector<std::string> names2 = { "Olivia", "Sophia", "Emma" };

	std::vector<std::string> result = unique_names(names1, names2);
	for (auto element : result)
	{
		std::cout << element << ' '; // should print Ava Emma Olivia Sophia
	}
}
#endif
