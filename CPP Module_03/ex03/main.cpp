/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:53:29 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:04:36 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main () 
{
    DiamondTrap evgeniy;
    DiamondTrap semen("Semen");
    
    semen.attack("ARTUR");
    semen.takeDamage(5);
    semen.beRepaired(5);
    semen.guardGate();
    semen.highFivesGuys();
    semen.whoAmI();
    
    return 0;
}