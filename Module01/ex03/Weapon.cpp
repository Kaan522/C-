/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:36:37 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:36:38 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type)
{
	this->setType(type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}

const std::string &Weapon::getType(void)
{
	return this->type;
}
