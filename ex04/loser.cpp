/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:20:33 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/17 13:46:26 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

void Loser::setString(char **av)
{
    s1 = av[2];
    s2 = av[3];
}

std::string Loser::getString(int i)
{
    if (i == 1)
        return s1;
    if (i == 2)
        return s2;
    return NULL;
}

Loser::Loser(char **av)
{
    setString(av);
}

Loser::~Loser()
{

}

std::string    replace(char **av, std::string& input)
{
    Loser loser(av);

    std::string output;
    size_t i = 0;
    std::string s1 = loser.getString(1);
    std::string s2 = loser.getString(2);
    while ((i = input.find(s1, i)) != std::string::npos)
    {
        input.erase(i, s1.length());
        input.insert(i, s2);
        i += s2.length();
    }
    output = input;
    return (output);
}
