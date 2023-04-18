/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:03:35 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/18 14:07:10 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringptr = &str;
    std::string& stringref = str;

    std::cout << "string:    " << &str << std::endl;
    std::cout << "stringptr: " << &stringptr << std::endl;
    std::cout << "stringref: " << &stringref << std::endl << std::endl;

    std::cout << "string:    " << str << std::endl;
    std::cout << "stringptr: " << stringptr << std::endl;
    std::cout << "stringref: " << stringref << std::endl;

    return (0);
}