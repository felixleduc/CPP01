/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:57:40 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/15 13:12:01 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int lookfile( char *filename ) {
    std::ifstream   file;
    file.open( filename );
    if ( !file )
        return ( 0 );
    return ( 1 );
}

int main( int argc, char *argv[] ) {
    if ( argc == 4 ) {
        if ( !lookfile( argv[1] ) ) {
            std::cout << "file does not exist" << std::endl;
            return ( 1 );
        }
        return ( 0 );
    }
    std::cout << "Usage: <filename> <string 1> <string 2>" << std::endl;
    return ( 1 );
}