#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat ( void ): _name ("Default"), _grade (150){}
Bureaucrat::~Bureaucrat ( void ){}
Bureaucrat::Bureaucrat ( std::string name , int grade): _name (name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat ( const Bureaucrat &src): _name(src.getName())
{
	if (src.getGrade() < 1)
		throw (Bureaucrat::GradeTooLowException());
	else if (src.getGrade() > 150)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = src.getGrade();
}

void	Bureaucrat::signForm ( Form &form )
{
	form.beSigned (*this);
}

const std::string	Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::downGrade ( void )
{
	if (this->_grade - 1 < 1)
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::upGrade ( void )
{
	if (this->_grade + 1 > 150)
		throw (Bureaucrat::GradeTooHighException());
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat: Grade too 'HIGH'.");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat: Grade too 'LOW'.");
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade();
	return (os);
}
