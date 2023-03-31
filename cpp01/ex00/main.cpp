#include "Zombie.hpp"

int main(void)
{
    randomChump("Zombie");
    Zombie *zombie = newZombie("Zombie");
    zombie->announce();
    delete zombie;
    return (0);
}