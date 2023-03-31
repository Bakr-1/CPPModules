#include "easyfind.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        std::cerr << "\033[1;31m" << "Usage: ./easyfind [number]" << std::endl;
        return 1;
    }
	int findNumber = std::atoi(argv[1]);
	std::vector<int> array( 20 );
	srand( time( NULL ) );
	std::cout << "\033[1;36m" <<"--------------------------------------------------------------" << "\033[0m" << std::endl;
	for ( int i = 0; i < (int)array.size(); i++ ){
		array[i] = rand() % 21;
		if ( array[i] == findNumber )
			std::cout << "\033[1;41m" << array[i] << "\033[0m" << " " ;
		else
			std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	if ( easyfind( array, findNumber ) )
		std::cout << "\033[1;32m" << findNumber << ": is found" << "\033[0m" << std::endl;
	else
		std::cerr << "\033[1;31m" << findNumber << ": not found!" << "\033[0m" << std::endl;
	std::cout << "\033[1;36m" <<"--------------------------------------------------------------" << "\033[0m" << std::endl;
	return 0;
}