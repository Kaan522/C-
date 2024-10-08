#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool _gatekeeper_mode;
	public:
		ScavTrap ( void );
		ScavTrap ( std::string name );
		ScavTrap ( const ScavTrap &src);
		~ScavTrap ( void );

		void guardGate();
		void		attack(const std::string& target);

		ScavTrap	&operator=( const ScavTrap &src );

};

#endif