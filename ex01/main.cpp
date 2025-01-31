#include <iostream>
#include "Zombie.hpp"

#define N 7

int main(void)
{
    Zombie* horde = zombieHorde(N, "pipi");

    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}