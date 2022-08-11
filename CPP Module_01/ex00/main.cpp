/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:05:47 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 18:52:23 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main ()
{
    Zombie  zombie1("Tvar");
    Zombie  *zombie2;
    Zombie  *zombie3 = new Zombie("WalkingDead");

    zombie2 = newZombie("Vurdalak");
    randomChump("Mertvec");
    zombie1.announce();
    zombie2->announce();
    zombie3->announce();
    
    delete zombie2;
    delete zombie3;
    
    return (0);
}
