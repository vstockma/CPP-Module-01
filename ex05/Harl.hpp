/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:08:29 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/25 13:17:58 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# pragma once

#include <iostream>
#include <string>
#include <cstring>

class Harl
{
    public:
        void    complain(std::string level);

    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

typedef void (Harl::*t_func)(void);

#endif