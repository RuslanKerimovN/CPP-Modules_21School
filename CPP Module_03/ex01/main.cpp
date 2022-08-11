/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:53:29 by botilia           #+#    #+#             */
/*   Updated: 2022/07/23 13:32:28 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
    
    ClapTrap ryanGosling2("GOSLING");
    ScavTrap mTerm("MODIFY_TERMINATOR");
    std::cout << "After this battle, Scinet maked modify version terminator it is M-TERM!!!\n" <<
        "Which go to search -> RYAN GOSLING <- and find him, and battle begin" << std::endl;
    std::cout << "GOSLONG: - ... Who are you, oh .....!!!" << std::endl;
    mTerm.attack("BUILDING");
    std::cout << "GOSLONG: - ... Only one shot and this building was blowned!!!" << std::endl;
    ryanGosling2.attack("MODIFY_TERMINATOR");
    mTerm.takeDamage(30);
    std::cout << "MODIFY_TERMINATOR: - ... HAHAHA, Is that all you have got, boy???" << std::endl;
    mTerm.attack("GOSLONG");
    ryanGosling2.takeDamage(20);
    std::cout << "MODIFY_TERMINATOR: - And it is hope all humanity???? HAHAHA" << std::endl;
    mTerm.guardGate();
    std::cout << "<<HUMANITY IS DOOMED TO EXTINCTION>>" << std::endl;
    return 0;
}