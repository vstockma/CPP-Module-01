/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:01:34 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/19 13:45:33 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie" << _name << " constructed" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::give_name(std::string new_name)
{
    _name = new_name;
}
