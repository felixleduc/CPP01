/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:21:31 by fleduc            #+#    #+#             */
/*   Updated: 2022/11/14 17:43:57 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name ) {
    Zombie *zomb = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zomb[i].setName(name);
        zomb[i].announce();
    }
    return (zomb);
}