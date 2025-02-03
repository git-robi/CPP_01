/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:40:26 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 12:40:28 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Zombie " << this->name << " is destroyed!" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << this->name  << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
