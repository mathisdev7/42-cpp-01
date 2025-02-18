/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:46:47 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:15:33 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

Zombie::Zombie(string name) : _name(name)
{
	cout << "Hi, my name is " << name << " and I am not a zombie, really." << endl;
}

Zombie::~Zombie(void)
{
	cout << "Damn, I (" << _name << ") really was one." << endl;
}

void Zombie::announce(void) const
{
	cout << _name << ": BraiiiiiiinnnzzzZ...\n"
		 << endl;
}
