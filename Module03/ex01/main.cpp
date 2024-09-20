#include "ScavTrap.hpp"

int	main()
{
	ScavTrap p1;
	ScavTrap p2;

	p2 = p1;
	p1.guardGate();
	p1.attack ("Hmmmmmmm");
	p1.guardGate();
	p1.attack ("Hmmmmmmm");
	p1.takeDamage(100);
	p1.takeDamage(100);
	p2.takeDamage(10);
	p2.beRepaired (100);
	return (0);
}