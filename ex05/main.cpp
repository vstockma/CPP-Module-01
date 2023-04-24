/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:08:03 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 11:01:20 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl harly;

    harly.complain("INFO");
    harly.complain("WARNING");
    harly.complain("DEBUG");
    harly.complain("ERROR");
    return (0);
}