/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:33:38 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:19:16 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string.h>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
    public:
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap& object);
            ScavTrap& operator = (const ScavTrap& object);
            ~ScavTrap();
            void    attack(const std::string& target);
            void    guardGate();
            void    setEnergyPoints();    
    protected:
            // static const int energyPoints = 30;
};

#endif