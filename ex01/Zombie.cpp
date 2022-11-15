/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:06:08 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 17:41:19 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {
    std::cout << "A zombie was created" << std::endl;
}

Zombie::Zombie( std::string name ) : _name(name) {
    std::cout << this->_name << " the zombie was created" << std::endl;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << " the zombie rotted away" << std::endl;
}

void    Zombie::announce( void ) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName( std::string name ) {
    this->_name = name;
}
