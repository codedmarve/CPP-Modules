/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:26:56 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/24 17:26:56 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB {
private:
	Weapon	*weapon;
	std::string const	name;

public:
	HumanB (std::string const newName);
	~HumanB ( void );

	void	attack ( void ) const;
	void	setWeapon(Weapon &newWeapon);
};

#endif