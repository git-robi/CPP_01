/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:20:27 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:20:30 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie " << this->name << " is created!" << std::endl;
}

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
