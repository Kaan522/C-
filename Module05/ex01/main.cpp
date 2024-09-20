#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main ( void )
{
	try{
		Bureaucrat	A;
		Bureaucrat	B("B_B", 15); 
		Form	form1;
		Form	form2 ("form2", 20, 100);
		std::cout << A << std::endl;
		std::cout << B << std::endl;
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

		B.signForm (form2);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;

	}catch ( const Bureaucrat::GradeTooHighException& e ){
		std::cout << e.what() << std::endl;
	}catch ( const Bureaucrat::GradeTooLowException& e ){
		std::cout << e.what() << std::endl;
	}catch ( const Form::GradeTooHighException& e ){
		std::cout << e.what() << std::endl;
	}catch ( const Form::GradeTooLowException& e ){
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
