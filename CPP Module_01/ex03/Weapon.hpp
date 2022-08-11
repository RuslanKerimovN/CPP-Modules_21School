/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:00:17 by botilia           #+#    #+#             */
/*   Updated: 2022/07/19 13:25:10 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include "Weapon.h"

class Weapon {
    private:
                std::string type;

    public:
                Weapon(std::string type);
                std::string getType();
                void        setType(std::string type);
                ~Weapon();
};

#endif