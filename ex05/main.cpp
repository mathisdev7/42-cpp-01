/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:22:46 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 16:48:47 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Harl.hpp"
#include <cstdlib>

using namespace std;

int main()
{
	Harl harl;

	cout << "Harl talks a lot." << endl
		 << endl;
	harl.complain("ERROR");
	harl.complain("something else");
	cout << "Select a level to make Harl talk." << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "level: ";
		string input;
		getline(cin, input);
		if (cin.eof() == true)
		{
			cerr << "Exit..." << endl;
			exit(1);
		}
		harl.complain(input);
		cout << endl;
	}
	return (1);
}
