/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:37:07 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:37:09 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class file
{
private:
	std::ifstream read;
	std::ofstream write;
	std::string readline;
	std::string file_name;
	std::string file_search_word;
	std::string file_replace_word;
public:
	file(char **str);
	void file_replace(void);
	void file_copy(void);
};
