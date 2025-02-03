/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:26:28 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:26:30 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl harl;

    std::cout << "DEBUG:" << std::endl;
    harl.complain("DEBUG");

    std::cout << "\n";

    std::cout << "INFO:" << std::endl;
    harl.complain("INFO");

    std::cout << "\n";

    std::cout << "WARNING:" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n";

    std::cout << "ERROR:" << std::endl;
    harl.complain("ERROR");

    std::cout << "\n";

    std::cout << "INVALID LEVEL:" << std::endl;
    harl.complain("INVALID LEVEL");

    return (0);
}
