/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 08:21:16 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/17 08:21:16 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &other);
	~DiamondTrap();

	DiamondTrap	&operator=(DiamondTrap const &other);
	void		whoAmI();
	void		attack(const std::string & traget);

	std::string	getDiamondName();
	void		setDiamondName(std::string name);
};

#endif