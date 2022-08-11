/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:59:12 by botilia           #+#    #+#             */
/*   Updated: 2022/07/21 17:18:17 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : integer(0) {}

Fixed::Fixed(const int value) {
    this->integer = value << this->constanta;
}

Fixed::Fixed(const float value) {
    this->integer = roundf(value * (1 << this->constanta));
}

Fixed::Fixed(const Fixed& object) {
    *this = object;
}

Fixed& Fixed::operator=(const Fixed& object) {
    this->integer = object.getRawBits();
    return *this;
}

bool    Fixed::operator > (const Fixed& object) const {
    return this->integer > object.integer;
}

bool        Fixed::operator < (const Fixed& object) const {
    return this->integer < object.integer;
}

bool        Fixed::operator <= (const Fixed& object) const {
    return this->integer <= object.integer;
}

bool        Fixed::operator >= (const Fixed& object) const {
    return this->integer >= object.integer;
}

bool        Fixed::operator == (const Fixed& object) const {
    return this->integer == object.integer;
}

bool        Fixed::operator != (const Fixed& object) const {
    return this->integer != object.integer;
}

Fixed   Fixed::operator+(const Fixed& object) const {
    Fixed tmp;
    
    tmp.setRawBits(this->integer + object.getRawBits());
    return tmp;
}

Fixed   Fixed::operator-(const Fixed& object) const {
    Fixed tmp;
    
    tmp.setRawBits(this->integer - object.getRawBits());
    return tmp;
}

Fixed   Fixed::operator*(const Fixed& object) const {
    Fixed tmp;
    
    tmp.setRawBits(this->integer * object.toFloat());
    return tmp;
}

Fixed   Fixed::operator/(const Fixed& object) const {
    Fixed tmp;
    if (object.integer == 0) {
        std::cerr << "You can't divide by zero" << std::endl;
        exit(1);
    }
    tmp.setRawBits(this->integer / object.toFloat());
    return tmp;
}

Fixed&   Fixed::operator++() {
    this->integer++;
    return *this;
}

Fixed&  Fixed::operator--() {
    this->integer--;
    return *this;
}

Fixed   Fixed::operator++(int) {
    Fixed tmp(*this);

    this->integer++;
    return tmp;
}

Fixed   Fixed::operator--(int) {
    Fixed tmp(*this);

    this->integer--;
    return tmp;
}

Fixed::~Fixed() {}

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

Fixed&  Fixed::min(Fixed& a, Fixed& b) {
    return a > b ? b : a;
}

Fixed&  Fixed::max(Fixed& a, Fixed& b) {
    return a > b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return a > b ? b : a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& object) {
    out << object.toFloat();
    return out;
}
