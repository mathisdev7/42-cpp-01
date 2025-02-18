/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:38:50 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:53:17 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Weapon.hpp"

#pragma once

using namespace std;

class HumanB
{
	private:
		string _name;
		Weapon *weapon;
	public:
		void attack(void) const;
		void setWeapon(Weapon weapon);
		string getName(void) const;
		HumanB(string name);
		~HumanB(void);
};