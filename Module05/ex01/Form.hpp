#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int	_signGrade;
		const int	_executeGrade;
	public:
		Form( void );
		Form( const Form &src );
		Form( std::string name, int signGrade, int executeGrade );
		~Form ( void );
		
		int	signGrade ( void ) const;
		int	executeGrade ( void ) const;
		void	beSigned( const Bureaucrat &bro );
		bool	getSign ( void ) const;
		std::string	getName ( void ) const;

	class GradeTooHighException : public std::exception
	{
		public:
			const char*	what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char*	what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &os, const Form &src);

#endif
