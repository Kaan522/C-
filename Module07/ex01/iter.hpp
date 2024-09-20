#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void my_func(const T &tmp)
{
    std::cout << "MyFunc: " << tmp << std::endl;
}

template <typename T>
void iter(T *ref, int len, void	(*func)(T const&))
{
    for (int i = 0; i < len; i++)
    {
        func(ref[i]);
    }
}


#endif
