/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:09:01 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 11:01:21 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    complain(std::string level)
{
    
}

void    debug(void)
{
    std::cout << "I love having extra bacon for my"; 
    std::cout << "7XL-double-cheese-triple-pickle-special-";
    std::cout << "ketchup burger. I really do!" << std::endl;
}

void    info(void)
{
    std::cout << "I cannot believe adding extra bacon costs ";
    std::cout << "more money. You didn’t put enough bacon in ";
    std::cout << "my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working ";
    std::cout << "here since last month." << std::endl;
}

void    error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
