/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vstockma <vstockma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:08:29 by vstockma          #+#    #+#             */
/*   Updated: 2023/04/24 11:01:20 by vstockma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# pragma once

#include <iostream>

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

#endif