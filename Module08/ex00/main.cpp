#include "easyfind.hpp"

int	main ( void )
{
	std::vector<int> vec(5, 42);
	easyfind (vec, 9);
	std::list<int> lst; 
	lst.push_back(254);
	lst.push_back(369);
	lst.push_back(5);
	lst.push_back(4);
	easyfind (lst, 4);
	return (0);
}
