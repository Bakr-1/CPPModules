#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
	if (argc == 1) 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		for (int i = 0; i < argc; ++i)
		{
			std::string str = argv[i];
			for (size_t j = 0; j < str.length(); ++j) 
			{
				char c = argv[i][j];
				std::cout << static_cast<char>(std::toupper(c));
			}
			std::cout << std::endl;
		}
	}
	return 0;
}
