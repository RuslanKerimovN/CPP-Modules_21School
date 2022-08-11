/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:27:21 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 13:49:28 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "Default constructor called " << std::endl;
    this->name = "DefaulName";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attacDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "Constructor "<< name << " called " << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attacDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& object) {
    std::cout << "Copy constructor called " << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attacDamage = object.attacDamage;
}

ClapTrap& ClapTrap::operator = (const ClapTrap& object) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attacDamage = object.attacDamage;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor " << this->name << " called " << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->hitPoints <= 0) {
        std::cout << this->name << " dead and cannot attack " << std::endl;
        return ;
    }
    else if (this->energyPoints <= 0) {
        std::cout << this->name << " have not energy and cannot attack " << std::endl;
        return ;
    }
    
    --this->energyPoints;    
    std::cout << this->name << " attacks " << target << " and energy = " << this->energyPoints << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    this->hitPoints -= amount;
    
    if (this->hitPoints <= 0) {
        std::cout << this->name << " dead " << std::endl;
        return ;
    }
    
    std::cout << this->name << " deals damage = " << amount <<
        " ,him HP = " << this->hitPoints << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints <= 0) {
        std::cout << this->name << " dead and cannot repair " << std::endl;
        return ;
    }
    else if (this->energyPoints <= 0) {
        std::cout << this->name << " have not energy and cannot repair " << std::endl;
        return ;
    }
    
    this->hitPoints += amount;
    if (this->hitPoints > 10)
        this->hitPoints = 10;
    
    --this->energyPoints;

    std::cout << this->name << " repaied, him HP = " << this->hitPoints << " and energy = "
        << this->energyPoints << std::endl;
}

std::string ClapTrap::getName() {
    return this->name;
}