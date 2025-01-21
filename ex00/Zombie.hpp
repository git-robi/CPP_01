#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    std::string name;

    Zombie(std::string zombieName) : name(zombieName) {}
    ~Zombie();
    
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif