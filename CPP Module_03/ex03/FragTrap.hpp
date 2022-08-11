/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:44:52 by botilia           #+#    #+#             */
/*   Updated: 2022/07/25 14:19:34 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap {
    public:
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap& object);
            FragTrap& operator = (const FragTrap& object);
            ~FragTrap();
            
            void    highFivesGuys(void);
            
    protected:
};

#endif