/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:38:50 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:51:56 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Weapon.hpp"

#pragma once

using namespace std;

class HumanA
{
	private:
		string _name;
		Weapon weapon;
	public:
		void attack(void) const;
		string getName(void) const;
		HumanA(string name, Weapon weapon);
		~HumanA(void);
};