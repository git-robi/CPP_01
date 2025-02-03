/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:41:02 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 12:41:03 by rgiambon         ###   ########.fr       */
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

    Zombie(std::string zombieName) : name(zombieName) {}
    ~Zombie();
    
    void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
