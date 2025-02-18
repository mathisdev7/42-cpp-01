/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:45:35 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:52:44 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./HumanA.hpp"
#include <iostream>

using namespace std;

HumanA::HumanA(string name, Weapon weapon)  : _name(name), weapon(weapon)
{
	this->_name = name;
	this->weapon = weapon;
}

HumanA::~HumanA()
{}

string HumanA::getName(void) const
{
	return (this->_name);
}

void HumanA::attack() const
{
	cout << this->getName() << " attacks with their " << this->weapon.getType() << endl;
}