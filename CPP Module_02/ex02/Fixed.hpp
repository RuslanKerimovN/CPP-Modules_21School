/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:37:52 by botilia           #+#    #+#             */
/*   Updated: 2022/07/21 17:29:52 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
    public:
            Fixed();
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed& object);
            Fixed&      operator=(const Fixed& object);
            bool        operator > (const Fixed& object) const;
            bool        operator < (const Fixed& object) const;
            bool        operator <= (const Fixed& object) const;
            bool        operator >= (const Fixed& object) const;
            bool        operator == (const Fixed& object) const;
            bool        operator != (const Fixed& object) const;
            Fixed       operator+(const Fixed& object) const;
            Fixed       operator-(const Fixed& object) const;
            Fixed       operator*(const Fixed& object) const;
            Fixed       operator/(const Fixed& object) const;
            Fixed&      operator++();
            Fixed&      operator--();
            Fixed       operator++(int);
            Fixed       operator--(int);
            ~Fixed();
            int         getRawBits(void) const;
            void        setRawBits(int const raw);
            float       toFloat(void) const;
            int         toInt(void) const;
            static Fixed&       min(Fixed& a, Fixed& b);
            static Fixed&       max(Fixed& a, Fixed& b);
            const static Fixed& min(const Fixed& a, const Fixed& b);
            const static Fixed& max(const Fixed& a, const Fixed& b);

    private:
            int integer;
            static const int constanta = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& object);

#endif
