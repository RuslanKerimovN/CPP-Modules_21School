/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:33:32 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:36:03 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "Default ScavTrap constructor called " << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "Constructor ScavTrap "<< name << " called " << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap& object) {
    std::cout << "Copy ScavTrap constructor called " << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& object) {
    std::cout << "Copy ScavTrap assignment operator called" << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor ScavTrap " << this->name << " called " << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0) {
        std::cout << "\"ScavTrap Attack\" " << this->name << " dead and cannot attack " << std::endl;
        return ;
    }
    else if (this->energyPoints <= 0) {
        std::cout << "\"ScavTrap Attack\" " << this->name << " have not energy and cannot attack " << std::endl;
        return ;
    }
    
    --this->energyPoints;    
    std::cout << "\"ScavTrap Attack\" " << this->name << " attacks " << target << " and energy = " << this->energyPoints << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode " << std::endl;
}
