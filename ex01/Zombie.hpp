#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    std::string name;
    
    Zombie();
    Zombie(std::string zombieName);
    ~Zombie();
    
    void announce( void );
};

Zombie* zombieHorde(int N, std::string name);

#endif