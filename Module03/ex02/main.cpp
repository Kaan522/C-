#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main ( void )
{
	FragTrap	p1;
	ScavTrap	p2;
	ClapTrap	p3;

	p1.attack("target of p1");
	p2.attack("target of p2");
	p2.takeDamage(50);
	p1.takeDamage(50);
	p2.beRepaired (100);
	p1.highFivesGuys();
	p2.guardGate();
	p2.attack("target of p2");

	return (0);
}