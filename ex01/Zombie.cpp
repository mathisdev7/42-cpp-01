/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:46:47 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:47:17 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
	cout << "Damn, I (" << _name << ") really was one." << endl;
}

void Zombie::setName(string name)
{
	_name = name;
}

void Zombie::announce(void) const
{
	cout << _name << ": BraiiiiiiinnnzzzZ...\n"
		 << endl;
}
