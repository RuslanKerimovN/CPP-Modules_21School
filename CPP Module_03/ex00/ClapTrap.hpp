/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:16:58 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:26:55 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap {
    public:
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(ClapTrap& object);
            ClapTrap& operator = (const ClapTrap& object);
            ~ClapTrap();
            void    attack(const std::string& target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
    private:
            std::string name;
            int hitPoints;
            int energyPoints;
            int attackDamage;
};

#endif