/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:53:29 by botilia           #+#    #+#             */
/*   Updated: 2022/07/22 15:45:13 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main () 
{
    ClapTrap ryanGosling("GOSLING");
    std::cout << "This war between humanity and computers!!!\n" <<
        "It is 2122 year, humanity losing, but people have one chance -> RYAN GOSLING <-" << std::endl;
    ClapTrap terminator("TERMINATOR");
    ClapTrap swarcneger(terminator);
    ClapTrap arnold;
    arnold = swarcneger;

    std::cout << "GOSLONG: - Oh no, it is three ... teminators, ok! lets play!!!!" << std::endl;
    std::cout << "TERMINATORS: - HAHAHA, you are just human, we will kill you!!!!" << std::endl;

    ryanGosling.attack("TERMINATOR");
    terminator.takeDamage(10);
    std::cout << "GOSLONG: - HELL YEAH, Minus one ... terminator!!!" << std::endl;
    arnold.attack("GOSLING");
    ryanGosling.takeDamage(6);
    std::cout << "GOSLONG: - OH MY GOD!!!" << std::endl;

    for (int i = 0; i < 4; i++)
        ryanGosling.beRepaired(1);
    
    ryanGosling.attack("TERMINATOR2");
    swarcneger.takeDamage(10000);
    std::cout << "GOSLONG: - Only one !!!" << std::endl;
    arnold.attack("GOSLING");
    ryanGosling.takeDamage(5);
    std::cout << "GOSLONG: - Last shot !!!" << std::endl;
    ryanGosling.attack("TERMINATOR3");
    arnold.takeDamage(100);
    for (int i = 0; i < 4; i++)
        ryanGosling.beRepaired(1);
    std::cout << "GOSLONG: - Yes, .... Terminator die and it is just begining!!!" << std::endl;

    return 0;
}