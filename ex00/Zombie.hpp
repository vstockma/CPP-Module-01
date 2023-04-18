/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:57:52 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 12:43:09 by vstockma         ###   ########.fr       */
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
        ~Zombie(void)
        {
            std::cout << "Zombie " << this->name << " destroyed" << std::endl;
        }
        void    announce(void);
};

Zombie* newZombie( std::string name);
void randomChump( std::string name);

#endif