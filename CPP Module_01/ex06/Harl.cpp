/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:00:45 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 19:30:36 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void    Harl::debug(void) {
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-" <<
        "triple-pickle-specialketchup burger. I really do!\n" << std::endl;
}

void    Harl::info(void) {
    std::cout << "[INFO]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put" <<
        "enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "[WARNING]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << 
    "I’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void) {
    std::cout << "[ERROR]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void    Harl::complain(std::string level) {
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*command[4])(void);

    command[0] = &Harl::debug;
    command[1] = &Harl::info;
    command[2] = &Harl::warning;
    command[3] = &Harl::error;

    for (int i = 0; i < 4; i++) {
        if (level == array[i]) {
            (this->*command[i])();
            break ;
        }
    }
}