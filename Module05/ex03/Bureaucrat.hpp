#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat ( void );
		~Bureaucrat ( void );
		Bureaucrat ( const Bureaucrat &src );
		Bureaucrat ( std::string name , int grade);

		Bureaucrat	&operator=(const Bureaucrat &src);

		void	signForm ( AForm &form );
		void	upGrade ( void );
		void	downGrade ( void );
		void	executeForm( AForm const &form );
		int	getGrade( void ) const;
		const std::string	getName( void ) const;

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

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &src);

#endif