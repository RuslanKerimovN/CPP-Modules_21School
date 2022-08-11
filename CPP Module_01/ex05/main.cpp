/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:50:08 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 18:13:24 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int main() 
{
    Harl harl;
    
    std::cout << "Harl very like bakon " << std::endl;
    harl.complain("DEBUG");

    std::cout << "Harl waxed by the price of bakon " << std::endl;
    harl.complain("INFO");

    std::cout << "Harl trying to dominate " << std::endl;
    harl.complain("WARNING");

    std::cout << "Harl very angry" << std::endl;
    harl.complain("ERROR");
    return 0;  
}