/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:23:53 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:23:54 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(){}


const std::string Weapon::getType(void)
{
    return (this->type);
} 

void Weapon::setType(std::string type)
{
    this->type = type;
}
