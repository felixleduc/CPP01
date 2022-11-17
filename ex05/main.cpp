/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:17:58 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/16 23:19:32 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {
    Harl    harlesque;
    harlesque.complain("debugging");
    harlesque.complain("debug");
    harlesque.complain("info");
    harlesque.complain("warning");
    harlesque.complain("error");
    return (0);
}
