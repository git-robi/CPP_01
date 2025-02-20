/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:23:59 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:24:01 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Weapon(std::string type);
    ~Weapon();

    const std::string &getType(); 
    void setType(const std::string type);
};

#endif 
