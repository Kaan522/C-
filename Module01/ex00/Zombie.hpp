/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:05:00 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:05:00 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
    	Zombie(std::string name);
    	~Zombie();
		void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
