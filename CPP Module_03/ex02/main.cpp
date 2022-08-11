/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:53:29 by botilia           #+#    #+#             */
/*   Updated: 2022/07/24 13:35:10 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main () 
{
    ClapTrap andrey("Andrey");
    ScavTrap sergey("Sergey");
    FragTrap fedor("Fedor");
    
    andrey.attack("ARTUR");
    andrey.takeDamage(5);
    andrey.beRepaired(5);
    
    sergey.attack("ARTUR");
    sergey.takeDamage(5);
    sergey.beRepaired(5);
    sergey.guardGate();

    fedor.attack("ARTUR");
    fedor.takeDamage(5);
    fedor.beRepaired(5);
    fedor.highFivesGuys();

    return 0;
}