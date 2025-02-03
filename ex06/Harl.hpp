/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:27:10 by rgiambon          #+#    #+#             */
/*   Updated: 2025/02/03 13:27:11 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

    public:

    void complain(std::string level);
};

#endif
