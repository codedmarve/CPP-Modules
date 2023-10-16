/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 01:12:22 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/07 01:12:22 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl {
private:
	void	debug ( void );
	void	info ( void );
	void	warning ( void );
	void	error ( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );
};

#endif