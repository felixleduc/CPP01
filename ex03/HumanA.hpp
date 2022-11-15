/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:53:00 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:13:45 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
    Weapon      &_weapon; // (reference) initialized right away
    std::string _name;
public:
    HumanA( std::string name, Weapon &weapon );
    ~HumanA();
    void    setWeapon( Weapon &weapon );
    void    attack( void ) const ;
};


#endif