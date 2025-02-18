/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:40:12 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:15:14 by mazeghou         ###   ########.fr       */
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
	Zombie(string name);
	~Zombie(void);
};

Zombie *newZombie(string name);
void randomChump(string name);
