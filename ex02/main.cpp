/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:54:04 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 18:03:24 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ) {
    std::string    brain = "HI THIS IS BRAIN";
    std::string    *stringPTR = &brain;
    std::string    &stringREF = brain;
    
    std::cout << "string address:    " << &brain << std::endl;
    std::cout << "stringPTR address: " << stringPTR << std::endl;
    std::cout << "stringREF address: " << &stringREF << std::endl << std::endl;
    std::cout << "string value:            " << brain << std::endl;
    std::cout << "stringPTR pointed value: " << *stringPTR << std::endl;
    std::cout << "stringREF pointed value: " << stringREF << std::endl;
    
    return (0);
}