#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks with their bare hands" << std::endl;
}
