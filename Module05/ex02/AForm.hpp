#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int	_signGrade;
		const int	_executeGrade;
	public:
		AForm( void );
		AForm( const AForm &src );
		AForm( const std::string name, int signGrade, int executeGrade );
		~AForm ( void );
		
		int	signGrade ( void ) const;
		int	executeGrade ( void ) const;
		bool	getSign ( void ) const;
		std::string	getName ( void ) const;
		void	beSigned( const Bureaucrat &bro );
		void	setSign ( bool s );
		virtual void	execute( const Bureaucrat &bro ) const = 0;

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
	class FormAllreadySigned : public std::exception
		{
			public:
				const char*	what() const throw();
		};
	class FormIsNotSigned : public std::exception
	{
		public:
			const char*	what() const throw();
	};
};

std::ostream	&operator<<( std::ostream &os, const AForm &src);

#endif
