#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	private:
		std::string	_name;
		int			_health;
		int			_energy;
		int			_attack_damage;
	public:
		ClapTrap( void );
		ClapTrap ( const ClapTrap &src );
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap	&operator=( const ClapTrap &src );
		void	hit_point(int hp);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	energy_points(unsigned int amount);
	
};
#endif
