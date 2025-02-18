/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 09:52:37 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 10:46:03 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

using namespace std;

Zombie *zombieHorde(int N, string name)
{
	if (N < 1)
	{
		cout << "A zombie horde size must be 1 or greater." << endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		cout << "Allocation failed" << endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
