/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:32:16 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:35:38 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

using namespace std;

Weapon::Weapon(string type)
{
	this->setType(type);
}

Weapon::~Weapon()
{}

const string& Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(string type)
{
	this->_type = type;
}
