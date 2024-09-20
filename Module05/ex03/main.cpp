#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main ( void )
{
	Intern someRandomIntern;
	AForm* f1;
	f1 = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *f1;
	delete f1;
	
	return (0);
}
