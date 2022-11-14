/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:06:23 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 15:14:34 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
  public:
    void    announce( void ) const;
    Zombie( std::string name );
    ~Zombie( void );

  private:
    std::string _name;
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
