#pragma once

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    Weapon &weapon;
    std::string name;

    public:

    HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name){}

    void attack();

};

#endif