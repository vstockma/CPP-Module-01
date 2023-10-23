/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:01:48 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/13 12:08:22 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *horde;
    int i = 0;
    try
    {
        horde = new Zombie[N];
    }
    catch(std::exception& ba)
    {
        std::cerr << ba.what() << std::endl;
        std::cerr << "Allocation failed\n";
        return (NULL);
    }
    while (i < N)
    {
        horde[i].give_name(name);
        i++;
    }
    return (horde);
}