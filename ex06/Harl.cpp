/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:13:53 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/16 23:37:29 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
    return ;
}

Harl::~Harl() {
    return ;
}

void    Harl::debug( void ) {
    std::cout << "Netflix will start putting ads" << std::endl;
}

void    Harl::info( void ) {
    std::cout << "Maybe it's time to go outside" << std::endl;
}

void    Harl::warning( void ) {
    std::cout << "Why does Netflix has to put ads" << std::endl;
}

void    Harl::error( void ) {
    std::cout << "Disney+ it is" << std::endl;
}

void    Harl::complain( std::string level ) {
    void    (Harl::*f[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string _level[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    for ( int i = 0; i < 4; i++ ) {
        if ( level == _level[i]) {
            switch (i) {
                case (0):
                    std::cout << "[ DEBUG ]" << std::endl;
                    (this->*f[0])();
                    std::cout << std::endl;
                case (1):
                    std::cout << "[ INFO ]" << std::endl;
                    (this->*f[1])();
                    std::cout << std::endl;
                case (2):
                    std::cout << "[ WARNING ]" << std::endl;
                    (this->*f[2])();
                    std::cout << std::endl;
                case (3):
                    std::cout << "[ ERROR ]" << std::endl;
                    (this->*f[3])();
                    std::cout << std::endl;
            }
            return ;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}