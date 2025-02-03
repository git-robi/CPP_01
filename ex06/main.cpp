/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:27:15 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:27:16 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv)
{
    Harl harl;

    if (argc == 1)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    
    harl.complain(argv[1]);

    return (0);
}
