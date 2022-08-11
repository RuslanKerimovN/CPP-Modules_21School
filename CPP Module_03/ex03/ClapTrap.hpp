/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:16:58 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 13:49:32 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE	"\033[0;34m"
#define END     "\x1b[0m"

class ClapTrap {
    public:
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(ClapTrap& object);
            ClapTrap& operator = (const ClapTrap& object);
            ~ClapTrap();
            void           attack(const std::string& target);
            void           takeDamage(unsigned int amount);
            void           beRepaired(unsigned int amount);
            std::string    getName();
    protected:
            std::string name;
            int         hitPoints;
            int         energyPoints;
            int         attacDamage;
};

#endif