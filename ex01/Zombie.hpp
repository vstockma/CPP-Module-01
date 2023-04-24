/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:01:03 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 13:10:16 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# pragma once

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name)
        {
            this->name = name;
	        std::cout << this->name << ": ";
        }
        Zombie(void)
        {
        }
        ~Zombie(void)
        {
            std::cout << "Zombie " << this->name << " destroyed" << std::endl;
        }
        void    announce(void);
        void    give_name(std::string new_name)
        {
            name = new_name;
        }
};

Zombie* zombieHorde( int N, std::string name);
#endif