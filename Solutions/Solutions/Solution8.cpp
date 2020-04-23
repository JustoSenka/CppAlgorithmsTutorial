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
#include <list>

class TrainComposition
{
public:

	std::list<int> LinkedList;

	void attachWagonFromLeft(int wagonId)
	{
		LinkedList.push_front(wagonId);
	}

	void attachWagonFromRight(int wagonId)
	{
		LinkedList.push_back(wagonId);
	}

	int detachWagonFromLeft()
	{
		auto id = LinkedList.front();
		LinkedList.pop_front();
		return id;
	}

	int detachWagonFromRight()
	{
		auto id = LinkedList.back();
		LinkedList.pop_back();
		return id;
	}
};

#ifndef RunTests
void main_8()
{
	TrainComposition train;
	train.attachWagonFromLeft(7);
	train.attachWagonFromLeft(13);
	std::cout << train.detachWagonFromRight() << "\n"; // 7 
	std::cout << train.detachWagonFromLeft(); // 13
}
#endif