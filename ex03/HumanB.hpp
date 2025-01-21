#pragma once

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    Weapon* weapon;
    std::string name;

    public:

    HumanB(std::string name) : weapon(NULL), name(name){}

    void setWeapon(Weapon& weapon);
    void attack();

};

#endif