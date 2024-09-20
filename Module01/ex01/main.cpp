/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:31:41 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:31:41 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# define N 4
int main( void ) {
    Zombie *zombiz = zombieHorde(N, "zombi");
    for (size_t i = 0; i < N; i++)
    {
        zombiz[i].announce();
    }
    delete [] zombiz;
    return 0;
}
