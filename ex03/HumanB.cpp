/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:45:35 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 19:35:52 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->weapon = weapon;
}

HumanB::~HumanB()
{
}

std::string HumanB::getName(void) const
{
	return (this->_name);
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{
	std::cout << this->getName() << " attacks with their " << weapon->getType() << std::endl;
}
