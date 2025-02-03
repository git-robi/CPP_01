/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:44:13 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 12:44:14 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

#define N 7

int main(void)
{
    Zombie* horde = zombieHorde(N, "pipi");

    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] horde;
    return (0);
}
