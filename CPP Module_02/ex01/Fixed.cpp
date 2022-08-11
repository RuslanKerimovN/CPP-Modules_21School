/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:25:40 by botilia           #+#    #+#             */
/*   Updated: 2022/07/21 15:41:55 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
    std::cout << "Int constructor called" << std::endl;
    this->integer = value << this->constanta;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->integer = roundf(value * (1 << this->constanta));
}

Fixed::Fixed(const Fixed& object) {
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed& Fixed::operator=(const Fixed& object) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->integer = object.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
    return this->integer;
}

void    Fixed::setRawBits(int const raw) {
    this->integer = raw;
}

float   Fixed::toFloat(void) const {
    float res = (float)this->integer / (1 << this->constanta);
    return res;
}

int   Fixed::toInt(void) const {
    return this->integer >> this->constanta;
}

std::ostream& operator<<(std::ostream& out, const Fixed& object) {
    out << object.toFloat();
    return out;
}
