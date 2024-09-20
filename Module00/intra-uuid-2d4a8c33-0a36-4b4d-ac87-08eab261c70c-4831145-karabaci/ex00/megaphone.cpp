#include <iostream>
#include <string.h>
#include <iomanip>

int main(int ac, char **av)
{
    int i = 0;
    int y = 1;
    if (ac <= 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    else
        while (av[y])
        {
            while (av[y][i])
            {
               std::cout << char(toupper(av[y][i]));
                i++;
            }
            i = 0;
            y++;
        }
        std::cout << std::endl;
}