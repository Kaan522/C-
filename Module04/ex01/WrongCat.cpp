#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
	std::cout << "Cat constructor called\n";
	this->_type = "Cat";
}

WrongCat::WrongCat( const WrongCat &src ): WrongAnimal( src )
{
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

WrongCat &WrongCat::operator=( const WrongCat &src )
{
	std::cout << "Cat assigment operator called\n";
	if(this != &src )
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "Cat destructor called\n";
}

void	WrongCat::makeSound( void ) const
{

	std::cout << "Miyvwv" << std::endl;
}
