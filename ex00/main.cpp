/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:55:29 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 09:57:12 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

int main()
{
	Zombie *myZombie = newZombie("Frost");
	randomChump("FortyTwo");
	delete myZombie;
	return (0);
}
