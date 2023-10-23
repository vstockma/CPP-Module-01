/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:06:58 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 11:19:59 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
     _weapon = NULL;
     _name = name;
     std::cout << "HumanB " << _name << " constructor called" << std::endl;
}

HumanB::~HumanB()
{
     std::cout << "HumanB " << _name << " destructor called" << std::endl;
}

void    HumanB::attack()
{
     if (!_weapon)
     {
          std::cout << "No weapon assigned" << std::endl;
          return ;
     }
     std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
     _weapon = &weapon;
     _weapon->getType();
}
