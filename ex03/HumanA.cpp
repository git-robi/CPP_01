#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}