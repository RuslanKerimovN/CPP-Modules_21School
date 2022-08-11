/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:40:29 by botilia           #+#    #+#             */
/*   Updated: 2022/07/17 15:26:33 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main ()
{
    int hordeSize = 5;
    Zombie *horde = zombieHorde(hordeSize, "Tvar");
    
    for (int i = 0; i < hordeSize; i++) {
        std::cout << "Zombie #" << (i + 1) << " -> ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}