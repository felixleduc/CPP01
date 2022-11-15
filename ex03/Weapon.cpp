/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:47:22 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:10:03 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {
    return ;
}

Weapon::Weapon( std::string type ) : _type( type ) {
    return ;
}

Weapon::~Weapon( void ) {
    return ;
}

const std::string& Weapon::getType( void ) const {
    return (this->_type);
}

void    Weapon::setType( std::string type ) {
    this->_type = type;
}
