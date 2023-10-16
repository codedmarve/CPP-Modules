/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:48:50 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 13:48:50 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {
private:
	std::string type;

public:
	Weapon (std::string const newType);
	~Weapon ( void );

	std::string const &getType( void ) const;
	void	setType(std::string const newType);
};

#endif