/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:05:16 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 11:28:16 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    if (type == "")
        _type = "default";
    else
        _type = type;
    std::cout << "Weapon " << _type << " constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << _type << " destructor called" << std::endl;
}

const std::string& Weapon::getType(void)
{
    return (_type);
}
void    Weapon::setType(const std::string& newType)
{
    _type = newType;
}