/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:37:21 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:37:23 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough veal in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra veal for free. I've been coming foryears whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	t_func fun[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && levels[i].compare(level))
		i++;
	if(i < 4)
		(this->*fun[i])();
}
