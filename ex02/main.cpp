/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 11:18:19 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 11:38:00 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main()
{
	string str = "HI THIS IS BRAIN";
	string *str_ptr = &str;
	string &str_ref = str;

	(void)str_ptr;
	(void)str_ref;
	cout << "Memory address of str: " << &str << endl;
	cout << "Memory address of str_ptr: " << str_ptr << endl;
	cout << "Memory address of str_ref: " << &str_ref << endl;
	cout << "--------------------------" << endl;
	cout << "Value of str: " << str << endl;
	cout << "Value pointed to by str_ptr: " << *str_ptr << endl;
	cout << "Value pointed to by str_ref: " << str_ref << endl;
}