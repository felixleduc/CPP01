/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:58:33 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:07:34 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &weapon ) : _weapon( weapon ), _name( name ) {
    std::cout << this->_name << " was born to kill" << std::endl;
}

HumanA::~HumanA( void ) {
    std::cout << this->_name << " hit the dust" << std::endl;
}

void    HumanA::setWeapon( Weapon &weapon ) {
    this->_weapon = weapon;
}

void    HumanA::attack( void )  const {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
