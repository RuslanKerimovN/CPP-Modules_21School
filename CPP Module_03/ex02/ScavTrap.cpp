/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:33:32 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:39:58 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << YELLOW << "Default constructor called " << END << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << YELLOW << "Constructor "<< name << " called " << END << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap& object) {
    std::cout << YELLOW << "Copy constructor called " << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
}

ScavTrap& ScavTrap::operator = (const ScavTrap& object) {
    std::cout << YELLOW << "Copy assignment operator called" << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << YELLOW << "Destructor " << this->name << " called " << END << std::endl;
}

void ScavTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0) {
        std::cout << YELLOW << this->name << " dead and cannot attack " << END << std::endl;
        return ;
    }
    else if (this->energyPoints <= 0) {
        std::cout << YELLOW << this->name << " have not energy and cannot attack " << END << std::endl;
        return ;
    }
    
    --this->energyPoints;    
    std::cout << YELLOW << this->name << " attacks " << target << " and energy = " << this->energyPoints << END << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << YELLOW << this->name << " is now in Gate keeper mode " << END << std::endl;
}
