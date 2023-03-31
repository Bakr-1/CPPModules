#include "Iter.hpp"

template <typename T>
void print( T const& ptr )
{
    static int i;
	std::cout << i << ": " << ptr <<  std::endl;
    i++;
}

int main ( void ) {

	int x[ 4 ] = { 99, 31, 53, 121 };
	iter( x, 4, print );
	std::string c[ 5 ] = { "Hello", "world", "C", "is", "trash" };
	iter( c, 5, print );
	return 0;
}