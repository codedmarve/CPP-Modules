/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:34:47 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/22 14:34:47 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA {
private:
	std::string const	name;
	Weapon const	&weapon;

public:
	HumanA (std::string const newName, Weapon const &newWeapon);
	~HumanA ( void );

	void	attack ( void ) const;
};

#endif