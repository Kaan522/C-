#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		const std::string	_target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( const std::string target);
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		~ShrubberyCreationForm( void );

		void	execute( const Bureaucrat &bro ) const;

		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &src );
};

#endif
