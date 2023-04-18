/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:05:56 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 15:17:32 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# pragma once

#include <iostream>

class HumanB
{
    public:
        std::string name;
        std::string weapon;
        void    attack();
};

#endif