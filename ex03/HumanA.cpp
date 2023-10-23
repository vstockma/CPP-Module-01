/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:06:18 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 11:14:35 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
     _weapon = &weapon;
     _name = name;
     std::cout << "HumanA " << _name << " constructor called" << std::endl;
}

HumanA::~HumanA()
{
     std::cout << "HumanA " << _name << " destructor called" << std::endl;
}

void    HumanA::attack()
{
     std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}