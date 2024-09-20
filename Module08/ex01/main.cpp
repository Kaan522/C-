#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(0);
	sp.addNumber(3);  
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(142);

	sp.addNumber(1234);
	sp.addNumber(131);
	std::cout << "min dis: " << sp.shortestSpan() << std::endl;
	std::cout << "max dis: " << sp.longestSpan() << std::endl;
	return 0;
}
