#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	std::string str;
	std::cout << "Hello, World!" << std::endl;
	while (1)
	{
		getline(std::cin, str);
		std::cout << str << std::endl;
		Sample sample(1, 2);
		if (str == "exit")
			break;
		if(str == "")
			break;
	}
}