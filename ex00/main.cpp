#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie* zombie_one = newZombie("one");
    zombie_one->announce();

    randomChump("two");

    delete zombie_one;

    return (0);
}