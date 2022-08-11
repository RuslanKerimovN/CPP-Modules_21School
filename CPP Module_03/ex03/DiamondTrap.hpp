/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 16:12:10 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:44:14 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
    public:
                DiamondTrap();
                DiamondTrap(std::string name);
                DiamondTrap(DiamondTrap& object);
                DiamondTrap& operator = (const DiamondTrap& object);
                ~DiamondTrap();

                void    attack(const std::string& target);
                void    whoAmI();
    private:
            std::string name;
};

#endif