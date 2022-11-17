/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:17:58 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/16 23:34:40 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char *argv[] ) {
    if ( argc == 2 ) {
        Harl    harlesque;
        harlesque.complain( argv[1] );
        return (0);
    }
    std::cout << "Usage: ./HarlFilter <complaint>" << std::endl;
    return (1);
}
