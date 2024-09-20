#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string av1)
{
	double num = 0;

	if (av1.length() == 1 && !std::isdigit(av1[0]))
		num = static_cast<double>(av1[0]);
	else
		num = std::strtod(av1.c_str(), NULL);
    

	std::cout << "char: ";
    if (!((num < 0) || (num > std::numeric_limits<char>::max())))
	{
        if (std::isprint(static_cast<int>(num)))
            std::cout << "\'" << static_cast<char>(num) << "\'";
	    else
            std::cout << "Non displayable"; 
    }
    else
        std::cout << "impossible";
    std::cout << std::endl;

    std::cout << "int : ";
    if (!((num < std::numeric_limits<int>::min()) || (num > std::numeric_limits<int>::max())))
        std::cout << static_cast<int>(num); 
    else
        std::cout << "impossible";
    std::cout << std::endl;


    std::cout << "float : " << static_cast<float>(num);
    if (static_cast<float>(num) - static_cast<long>(num) == 0.0f)
        std::cout << ".0";
    std::cout << "f" << std::endl;

    std::cout << "double : " << num;
    if (num - static_cast<long>(num) == 0.0)
        std::cout << ".0";
    std::cout << std::endl;
};

ScalarConverter::ScalarConverter()
{};

ScalarConverter::ScalarConverter(const std::string &name)
{
	(void)name;
};

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	(void)obj;
};

ScalarConverter::~ScalarConverter()
{};

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void)obj;
	return (*this);
};