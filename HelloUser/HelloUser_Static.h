#pragma once
#include <iostream>
#include <string>

class Greeter
{
	protected:
		std::string name;
	public:
		void greet(std::string name);
};
