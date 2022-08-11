/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:49:23 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:39:40 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
    std::cout << GREEN << "Defauld constructor called " << END << std::endl;
    std::cout << "Defauld parent = " << this->hitPoints << std::endl;
    this->hitPoints = 100;
    std::cout << GREEN << "Defauld daughter " << this->hitPoints << END << std::endl;
    std::cout << "Defauld parent = " << this->energyPoints << std::endl;
    this->energyPoints = 100;
    std::cout << GREEN << "Defauld daughter " << this->energyPoints << END << std::endl;
    std::cout << "Defauld parent = " << this->attackDamage << std::endl;
    this->attackDamage = 30;
    std::cout << GREEN << "Defauld daughter " << this->attackDamage << END << std::endl;
}

FragTrap::FragTrap(std::string name) {
    std::cout << GREEN << "Constructor "<< name << " called " << END << std::endl;
    std::cout << "With name parent = " << this->name << std::endl;
    this->name = name;
    std::cout << GREEN << "With name daughter " << this->name << END << std::endl;
    std::cout << "With name parent = " << this->hitPoints << std::endl;
    this->hitPoints = 100;
    std::cout << GREEN << "With name daughter " << this->hitPoints << END << std::endl;
    std::cout << "With name parent = " << this->energyPoints << std::endl;
    this->energyPoints = 100;
    std::cout << GREEN << "With name daughter " << this->energyPoints << END << std::endl;
    std::cout << "With name parent = " << this->attackDamage << std::endl;
    this->attackDamage = 30;
    std::cout << GREEN << "With name daughter " << this->attackDamage << END << std::endl;
}

FragTrap::FragTrap(FragTrap& object) {
    std::cout << GREEN << "Copy constructor called " << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
}

FragTrap& FragTrap::operator = (const FragTrap& object) {
    std::cout << GREEN << "Copy assignment operator called" << END << std::endl;
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energyPoints = object.energyPoints;
    this->attackDamage = object.attackDamage;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << GREEN << "Destructor " << this->name << " called " << END << std::endl;
}

void    FragTrap::highFivesGuys(void) {
    std::cout << GREEN << this->name << " calls for a high five! " << END << std::endl;
}