#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombie_horde = new Zombie[N];

    int i = 0;
    while (i < N)
    {
        new (&zombie_horde[i]) Zombie(name);
        i++;
    }
    return (zombie_horde);
}