#pragma once

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:

    std::string type;

    public:
    
    Weapon();
    Weapon(std::string type) : type(type){}
    const std::string getType(); 
    void setType(std::string type);
};

#endif 