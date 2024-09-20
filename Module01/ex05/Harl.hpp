/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karabaci <karabaci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:37:25 by karabaci          #+#    #+#             */
/*   Updated: 2023/07/04 17:37:26 by karabaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info(void);
	void warning(void);
	void error( void );
public:
	void complain( std::string level );
};

typedef void (Harl::*t_func) ( void );
