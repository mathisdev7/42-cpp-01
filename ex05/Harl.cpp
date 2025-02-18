/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:11:06 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 16:50:41 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Harl.hpp"

using namespace std;

void Harl::debug()
{
	cout << "[\033[34mDEBUG\033[0m] " << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"
		 << endl;
}

void Harl::info()
{
	cout << "[\033[32mINFO\033[0m] " << "I cannot believe adding extra bacon costs more money. \nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
		 << endl;
}

void Harl::warning()
{
	cout << "[\033[33mWARNING\033[0m] " << "I think I deserve to have some extra bacon for free. \nI've been coming for years whereas you started working here since last month.\n"
		 << endl;
}

void Harl::error()
{
	cout << "[\033[31mERROR\033[0m] " << "This is unacceptable! I want to speak to the manager now.\n"
		 << std::endl;
}

void Harl::complain(string level)
{
	string complainsLevel[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levelNb = -1;
	for (int i = 0; i < 4; i++)
	{
		if (complainsLevel[i] == level)
		{
			levelNb = i;
			break;
		}
	}
	switch (levelNb)
	{
	case 3:
	{
		Harl::error();
		Harl::warning();
		Harl::info();
		Harl::debug();
		break;
	}
	case 2:
	{
		Harl::warning();
		Harl::info();
		Harl::debug();
		break;
	}
	case 1:
	{
		Harl::info();
		Harl::debug();
		break;
	}
	case 0:
		Harl::debug();
		break;
	default:
		break;
	}
}
