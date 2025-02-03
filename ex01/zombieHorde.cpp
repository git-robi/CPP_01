/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:20:36 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:20:37 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombie_horde = new Zombie[N];

    int i = 0;
    while (i < N)
    {
        new (&zombie_horde[i]) Zombie(name);
        i++;
    }
    return (zombie_horde);
}
