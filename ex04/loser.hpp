/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:09:55 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 13:45:55 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_HPP
# define LOSER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Loser
{
    private:
        std::string s1;
        std::string s2;
    public:
        Loser(char **av);
        Loser();
        ~Loser();
        void    setString(char **av);
        std::string getString(int i);
};

std::string    replace(char **av, std::string& input);

#endif