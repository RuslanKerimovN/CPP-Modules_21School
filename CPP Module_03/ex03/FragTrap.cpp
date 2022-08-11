/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:49:23 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:06:47 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << GREEN << "Default constructor called " << END << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attacDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << GREEN << "Constructor "<< name << " called " << END << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attacDamage = 30;
}

FragTrap::FragTrap(FragTrap& object) {
    std::cout << GREEN << "Copy constructor called " << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attacDamage = object.attacDamage;
}

FragTrap& FragTrap::operator = (const FragTrap& object) {
    std::cout << GREEN << "Copy assignment operator called" << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attacDamage = object.attacDamage;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << GREEN << "Destructor " << this->name << " called " << END << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << GREEN << this->name << " calls for a high five! " << END << std::endl;
}