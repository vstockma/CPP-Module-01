/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:09:55 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 14:44:13 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP
# pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Loser
{
    public:
        std::string s1;
        std::string s2;
        Loser(char **av)
        {
            s1 = av[2];
            s2 = av[3];
        }
        Loser();
    std::string    replace(Loser *loser, std::string& input);
};
#endif