/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazeghou <mazeghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:06:59 by mazeghou          #+#    #+#             */
/*   Updated: 2025/02/18 16:08:59 by mazeghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

using namespace std;

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public:
	void complain(string level);
};
