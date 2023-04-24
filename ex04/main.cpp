/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:09:29 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 14:48:53 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void replaceAll(std::string& str, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.replace(pos, s1.length(), s2);
        pos += s2.length();
    }
}

std::string    replace(Loser *loser, std::string& input)
{
    std::string output;
    int i = 0;
    while ((i = input.find(loser->s1, i)) != std::string::npos)
    {
        input.erase(i, loser->s1.length());
        input.insert(i, loser->s2);
        i += loser->s2.length();
    }
    output = input;
    return (output);
}

int main(int ac, char **av)
{
    Loser loser(av);
    if (ac != 4)
    {
        std::cout << "Wrong amount of arguments!" << std::endl;
        return (1);
    }
    std::string filename = av[1];

    std::ifstream open_file;
    open_file.open(filename);
    if (open_file.fail())
    {
        std::cout << "Error opening file!" << std::endl;
        return (1);
    }
    std::stringstream buffer;
    buffer << open_file.rdbuf();
    std::string input;
    input = buffer.str();
    std::string replaced = replace(&loser, input);
    std::ofstream output_file(filename + ".replace");
    if (!output_file)
    {
        std::cout << "Error with outputfile creation!" << std::endl;
        return (1);
    }
    output_file << replaced;
    output_file.close();
    return (0);
}