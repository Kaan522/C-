#include "iter.hpp"

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    iter(array, 5, my_func);
    std::cout << "---------\n";
    std::string array_2[5] = {"a", "b", "c", "d", "e"};
    iter(array_2, 5, my_func);
    return (0);
}