/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:29:52 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:37:13 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

using namespace std;

class Weapon
{
	private:
		string _type;
	public:
		string getType() const;
		void setType(string type);
		Weapon(void);
		~Weapon(void);
};