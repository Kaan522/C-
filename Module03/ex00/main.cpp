#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	p1;
	ClapTrap	p2("player2");
	ClapTrap	p3("player3");
	ClapTrap	p4(p2);

	p1.attack("player2");
	p2.attack("player1");
	p2.takeDamage(5);
	std::cout << std::endl;
	p1.beRepaired(10);
	std::cout << std::endl;
	p2.beRepaired(10);
	std::cout << std::endl;
	return (0);
}