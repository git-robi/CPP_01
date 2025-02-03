/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:20:44 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:20:45 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
