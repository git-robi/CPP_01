#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie* horde = zombieHorde(5, "pipi");
    delete[] horde;
    return (0);
}