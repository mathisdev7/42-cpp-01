/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:40:12 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:15:55 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Zombie
{
private:
	string _name;

public:
	void announce(void) const;
	void setName(string name);
	Zombie();
	~Zombie(void);
};

Zombie *zombieHorde(int N, string name);
