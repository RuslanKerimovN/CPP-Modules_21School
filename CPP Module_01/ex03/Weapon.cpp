/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:04:13 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 13:21:26 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon(std::string type) {
    this->type = type;
}

std::string Weapon::getType() {
    return this->type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

Weapon::~Weapon() {}