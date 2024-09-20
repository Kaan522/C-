#include "Form.hpp"
#include "Bureaucrat.hpp"

int			Form::signGrade ( void ) const{return (this->_signGrade);}
int			Form::executeGrade ( void ) const{return (this->_executeGrade);}
std::string	Form::getName ( void ) const{return (this->_name);}
bool		Form::getSign ( void ) const{return (this->_isSigned);}
Form::~Form ( void ){}

Form::Form ( void ): _name("Default_form"), _isSigned(false), _signGrade(75), _executeGrade(75)
{}

Form::Form( std::string name, int signGrade, int executeGrade ): _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{}

Form::Form( const Form &src ): _name(src._name), _isSigned(src._isSigned), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{}

void	Form::beSigned( const Bureaucrat &bro )
{
	if (this->_signGrade < 1)
		throw(Form::GradeTooHighException());
	else if (this->_signGrade > 150)
		throw(Form::GradeTooLowException());
	else if (this->_signGrade < bro.getGrade())
		throw(Form::GradeTooHighException());
	else
		this->_isSigned = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form: Grade too 'HIGH'.");
}


const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form: Grade too 'LOW'.");
}

std::ostream	&operator<<(std::ostream &os, const Form &src)
{
	os << src.getName()<< "\nsign: "<< src.getSign() << "\nsign grade: " << src.signGrade() << "\nexecute grade: " << src.executeGrade() << std::endl;
	return (os);
}
