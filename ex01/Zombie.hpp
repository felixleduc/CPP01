/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:06:23 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 17:41:26 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
  public:
    void    announce( void ) const;
    void    setName( std::string name );
    Zombie( void );
    Zombie( std::string name );
    ~Zombie( void );

  private:
    std::string _name;
};

Zombie  *zombieHorde( int N, std::string name );

#endif
