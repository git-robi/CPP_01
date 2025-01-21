#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(){}


const std::string Weapon::getType(void)
{
    return (this->type);
} 

void Weapon::setType(std::string type)
{
    this->type = type;
}
