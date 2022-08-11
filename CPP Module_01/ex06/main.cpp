/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:50:08 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 19:28:23 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int filter(std::string argv)
{
    if (argv == "DEBUG")
        return 1;
    else if (argv == "INFO")
        return 2;
    else if (argv == "WARNING")
        return 3;
    else if (argv == "ERROR")
        return 4;
    return 0;
}

int main(int argc, char **argv) 
{
    int value;
    Harl harl;

    if (argc != 2) {
        std::cerr << "Error\nCheck quantity arguments" << std::endl;
        return 0;
    }
    if (!(value = filter(argv[1]))) {
        std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }
    switch (value)
    {
        case 1:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 2:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 3:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 4:
            harl.complain("ERROR");
            break;
        default:
            break;
    }
    return 0;  
}
