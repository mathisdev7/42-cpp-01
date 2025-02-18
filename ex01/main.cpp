/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:55:29 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:49:56 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

int main()
{
	Zombie *horde;
	int zombies = 10;

	cout << "-----------" << endl;
	cout << "First Test" << endl;
	horde = zombieHorde(zombies, "Frost");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < zombies; ++i)
		horde[i].announce();
	delete[] horde;
	cout << "-----------" << endl;
	cout << "Second Test" << endl;
	horde = zombieHorde(0, "Should fail");
	cout << "-----------" << endl;
	return (0);
}
