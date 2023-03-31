#include "Zombie.hpp"

int main(void)
{
    Zombie *ZombieHorde = zombieHorde(7, "ZOZO");
    for (int i = 0; i < 5; i++)
    {
        ZombieHorde[i].announce();
    }
    delete [] ZombieHorde;
    return (0);
}