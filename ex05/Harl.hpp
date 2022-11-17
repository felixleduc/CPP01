/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:14:14 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/16 18:16:56 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
  private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
  public:
    Harl( void );
    ~Harl();
    void    complain( std::string level );
};

#endif
