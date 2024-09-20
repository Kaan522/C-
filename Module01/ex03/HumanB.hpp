/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:36:26 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:36:27 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* weapon;
		std::string name;
	public:
		HumanB( std::string name_tmp );
		void    setWeapon( Weapon& weapon );
		void    attack( void ) const;
};
