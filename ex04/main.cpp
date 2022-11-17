/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:57:40 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/16 18:10:10 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void    change_string( std::string& tmp, std::string s1, std::string s2 ) {
    int i = tmp.find( s1 );
    while ( i != -1 ) {
        tmp.erase( i, s1.length() );
        tmp.insert( i, s2 );
        i = tmp.find( s1 );
    }
}

int main( int argc, char *argv[] ) {
    if ( argc != 4 ) {
        std::cout << "Usage: ./File <filename> <string 1> <string 2>" << std::endl;
        return ( 1 );
    }
    std::ifstream       file( argv[1] );
    std::string         s1( argv[2] );
    std::string         s2( argv[3] );
    if ( !file.good() || !std::string(argv[1]).length() || !s1.length() || !s2.length() ) {
        std::cout << "Usage: ./File <filename> <string 1> <string 2>" << std::endl;
        return ( 1 );
    }
    std::ofstream   file_cp( std::string(argv[1]) + ".replace" );
    std::string     tmp;
    char            c;
    while (file.get( c ))
        tmp.push_back( c );
    change_string( tmp, s1, s2 );
    file_cp << tmp;
    file.close();
    file_cp.close();
    return ( 0 );
}