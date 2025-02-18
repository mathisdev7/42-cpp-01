/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:52:37 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 09:53:59 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

Zombie *newZombie(string name)
{
	Zombie *myZombie = new Zombie(name);
	myZombie->announce();
	return (myZombie);
}
