/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:55:52 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:13:23 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
    Weapon      *_weapon; // (pointer) doesn't need initialization right away
    std::string _name;
  public:
    HumanB( std::string name );
    ~HumanB();
    void    setWeapon( Weapon &weapon );
    void    attack( void ) const;
};


#endif