#include  "Convert.hpp"

int main(int argc, char **argv)
{
    // _CONVERT_AUTO(32, "Main");
    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    Convert convert;
    convert.convert(argv[1], &convert._Integer, &convert._Float, &convert._Double, &convert._Char);
    convert.printChar();
    convert.printInt();
    convert.printFloat();
    convert.printDouble();
    return 0;
}