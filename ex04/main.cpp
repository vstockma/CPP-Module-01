/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:09:29 by vstockma          #+#    #+#             */
/*   Updated: 2023/10/20 10:14:38 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Wrong amount of arguments!" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::ifstream open_file(filename.c_str());
    if (!open_file.is_open())
    {
        std::cout << "Error opening file!" << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << open_file.rdbuf();
    std::string input = buffer.str();
    open_file.close();
    std::string replaced = replace(av, input);
    std::ofstream output_file((filename + ".replace").c_str());
    if (!output_file.is_open())
    {
        std::cout << "Error with output file creation!" << std::endl;
        return 1;
    }
    output_file << replaced;
    output_file.close();
    return (0);
}
