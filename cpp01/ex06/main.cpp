#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
        std::cerr << "Wrong number of arguments." << std::endl;
    else
        harl.complain(av[1]);
}
