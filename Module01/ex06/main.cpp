/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:38:04 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:38:05 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int word_count, char **str)
{
    if(word_count == 2)
    {
        Harl    harl;

        harl.complain(str[1]);
    }
    else
        std::cout << "Usage: ./harlFilter \"level\"" << std::endl;
    return EXIT_SUCCESS;
}
