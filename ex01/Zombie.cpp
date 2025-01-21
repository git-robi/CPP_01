#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string zombieName)
{
    this->name = zombieName;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name  << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}