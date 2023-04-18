/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:04:22 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 15:22:58 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# pragma once

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& getType(void);
        void    setType(const std::string& newType);
};

#endif