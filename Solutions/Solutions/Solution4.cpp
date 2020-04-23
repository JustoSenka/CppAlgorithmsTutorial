/*
User interface contains two types of user input controls: TextInput, which accepts all characters and NumericInput, which accepts only digits.

Implement the following methods:

add on class TextInput - adds the given character to the current value
getValue on class TextInput - returns the current value
add on class NumericInput - overrides the base class method so that each non-numeric character is ignored
For example, the following code should output "10":
*/

#include <iostream>
#include <string>
#include <vector>

class TextInput
{
public:
	std::vector<char> chars;

	virtual void add(char c)
	{
		chars.push_back(c);
	}

	std::string getValue() { return std::string(chars.begin(), chars.end()); }
};

class NumericInput : public TextInput
{
	void add(char c) override
	{
		if (c >= '0' && c <= '9')
		{
			TextInput::add(c);
		}
	}
};

#ifndef RunTests
void main_4()
{
	TextInput* input = new NumericInput();
	input->add('1');
	input->add('a');
	input->add('0');
	std::cout << input->getValue();
}
#endif