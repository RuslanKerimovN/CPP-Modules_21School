/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:07:34 by botilia           #+#    #+#             */
/*   Updated: 2022/07/21 17:29:49 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() 
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    // std::cout << (a != b) << std::endl;
    // std::cout << (a == b) << std::endl;
    // std::cout << (a >= b) << std::endl;
    // std::cout << (a <= b) << std::endl;
    // std::cout << (a > b) << std::endl;
    // std::cout << (a < b) << std::endl;
    // std::cout << (a + b) << std::endl;
    // std::cout << (a - b) << std::endl;
    // std::cout << (a * b) << std::endl;
    // std::cout << (a / b) << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << --a << std::endl;
    // std::cout << a-- << std::endl;
    // std::cout << a << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;
    return 0;
}