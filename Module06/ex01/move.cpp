#include "Serializer.hpp"

struct Data
{
	int		a;
	double	b;
};

Data *move(uintptr_t test)
{
    Data *comp = Serializer::deserialize(test);

    std::cout << "comp->a++ = " << comp->a++ << " , comp->b++ = " << comp->b++ << std::endl;
    return (comp);
}