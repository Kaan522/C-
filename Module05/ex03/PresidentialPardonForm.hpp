#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		const std::string	_target;
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( const std::string target);
		PresidentialPardonForm( const PresidentialPardonForm &rhs );
		~PresidentialPardonForm( void );

		void	execute( const Bureaucrat &bro ) const;

		PresidentialPardonForm &operator=( const PresidentialPardonForm &src );
};

#endif
