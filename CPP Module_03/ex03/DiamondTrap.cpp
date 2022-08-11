/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:05:01 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:45:30 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
    std::cout << BLUE << "Diamond Default constructor called " << END << std::endl;
    this->name = ClapTrap::name;
    this->hitPoints = FragTrap::hitPoints;
    ScavTrap::setEnergyPoints();
    this->attacDamage = FragTrap::attacDamage;
    std::cout << BLUE << "Clap name: " << ClapTrap::getName() << END << std::endl;
    std::cout << BLUE << "Diamond name: " << this->name << END << std::endl;
    std::cout << BLUE << "HP = " << this->hitPoints <<  END << std::endl;
    std::cout << BLUE << "Energy = " << this->energyPoints << END << std::endl;
    std::cout << BLUE << "Damage = " << this->attacDamage << END << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") {
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    ScavTrap::setEnergyPoints();
    this->attacDamage = FragTrap::attacDamage;
    std::cout << BLUE << "Clap name: " << ClapTrap::getName() << END << std::endl;
    std::cout << BLUE << "Diamond name: " << this->name << END << std::endl;
    std::cout << BLUE << "HP = " << this->hitPoints <<  END << std::endl;
    std::cout << BLUE << "Energy = " << this->energyPoints << END << std::endl;
    std::cout << BLUE << "Damage = " << this->attacDamage << END << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& object) {
    std::cout << BLUE << "Copy constructor called " << END << std::endl;
    *this = object;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& object) {
    std::cout << BLUE << "Copy assignment operator called" << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attacDamage = object.attacDamage;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << BLUE << "Destructor " << this->name << " called " << END << std::endl;
}

void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << BLUE << "Diamond name: " << this->name << END << std::endl;
    std::cout << BLUE << "Clap name: " << ClapTrap::getName() << END << std::endl;
}