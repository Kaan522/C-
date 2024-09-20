/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:36:17 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:36:19 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_tmp): name(name_tmp)
{
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack(void)const
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
