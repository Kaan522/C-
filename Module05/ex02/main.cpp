#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main ( void )
{
		try
		{
			Bureaucrat b1("b1", 5);
			std::cout << b1 << std::endl << std::endl;

			PresidentialPardonForm P("p");
			RobotomyRequestForm R("r");
			ShrubberyCreationForm S("s");

			std::cout << P << std::endl;
			std::cout << R << std::endl;
			std::cout << S << std::endl;

			b1.signForm (P);
			b1.signForm (R);
			b1.signForm (S);

			std::cout << P << std::endl;
			std::cout << R << std::endl;
			std::cout << S << std::endl;

			b1.executeForm ( P );
			b1.executeForm ( R );
			b1.executeForm ( S );
		}catch(const std::exception &e){
			std::cerr << e.what() << std::endl;
		}catch(const std::string &e){
			std::cerr << e << std::endl;
		}
	return (0);
}
