#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
	private:
	public:
		Cat( void );
		~Cat( void );
		Cat( const Cat &src );
		Cat &operator=( const Cat &src );

		void	makeSound ( void ) const;
};

#endif
