/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:45:35 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 19:35:52 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : _name(name), weapon(weapon)
{
	this->_name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{
}

std::string HumanA::getName(void) const
{
	return (this->_name);
}

void HumanA::attack() const
{
	std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}
