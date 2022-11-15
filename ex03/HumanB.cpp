/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:02:45 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:05:22 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _weapon( NULL ), _name( name ) {
    std::cout << this->_name << " was born to kill" << std::endl;
}

HumanB::~HumanB( void ) {
    std::cout << this->_name << " hit the dust" << std::endl;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
}

void    HumanB::attack( void ) const {
    if ( _weapon )
        std::cout << this->_name << " attacks with their " << (*_weapon).getType() << std::endl;
    else
        std::cout << this->_name << " chose to fight Bruce Lee style, that means bare handed" << std::endl;
}
