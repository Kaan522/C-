#include "Bureaucrat.hpp"

int	main ( void )
{
	try{
		Bureaucrat	A;
		Bureaucrat	B("B", 50); 
		Bureaucrat	C("C", 50);
		std::cout << A << std::endl;
		std::cout << B << std::endl;
	}catch ( const Bureaucrat::GradeTooHighException &e ){
		std::cout << e.what() << std::endl;
	}catch ( const Bureaucrat::GradeTooLowException &e ){
		std::cout << e.what() << std::endl;
	}
	return (0);
}