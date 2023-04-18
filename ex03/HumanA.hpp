/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:05:32 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 15:26:37 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        std::string &weapon;

    public:
        HumanA(std::string name, Weapon weapon);
        void    attack();
};

#endif