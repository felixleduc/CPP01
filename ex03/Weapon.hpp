/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:47:50 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 21:10:27 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
  private:
    std::string  _type;
  public:
    Weapon( std::string type );
    Weapon( void );
    ~Weapon();
    const std::string&  getType( void ) const;
    void                setType( std::string type );
    
};

#endif