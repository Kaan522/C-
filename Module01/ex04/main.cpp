/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:37:11 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:37:12 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file.hpp"
int main(int count, char **str)
{
	if(count == 4)
	{
		file file_tmp(str);
		file_tmp.file_copy();
	}
	else
		std::cout << "Used: <filename> <to_file> <replace>" << std::endl;
}
