#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		const std::string	_target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( const std::string target);
		RobotomyRequestForm( const RobotomyRequestForm &rhs );
		~RobotomyRequestForm( void );

		void	execute( const Bureaucrat &executor ) const;

		RobotomyRequestForm &operator=( const RobotomyRequestForm &src );
};

#endif
