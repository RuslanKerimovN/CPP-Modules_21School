/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:55:00 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 17:00:05 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include "Harl.h"

class Harl {
    private:
            void    debug(void);
            void    info(void);
            void    warning(void);
            void    error(void);
    public:
            void    complain(std::string level);
};

#endif