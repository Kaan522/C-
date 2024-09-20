#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm ( void ) : AForm("PresidentialPardonForm", 25, 5), _target("Default")
{}

PresidentialPardonForm::PresidentialPardonForm ( const std::string target ) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &src) : AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{}

PresidentialPardonForm::~PresidentialPardonForm ( void )
{}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &src )
{
	this->setSign( src.getSign() );
	return (*this);
}

void	PresidentialPardonForm::execute ( const Bureaucrat &bro) const
{
	if (!this->getSign())
		throw (AForm::FormIsNotSigned());
	if (this->executeGrade() > bro.getGrade())
		throw ( AForm::GradeTooLowException() );

	std::cout << this->_target <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
}
