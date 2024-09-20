/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:31:58 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:31:58 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
	std::cout<<this->name<<" Zombie has been destroyed\n";
}

void Zombie::announce( void )
{
	std::cout<<this->name<< ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setname(std::string name)
{
	this->name = name;
}
