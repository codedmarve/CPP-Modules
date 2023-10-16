/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 17:48:32 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/12 17:48:32 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "CLAPTRAP\n";
	std::cout << partition << std::endl;

	{
		ClapTrap	clap("clappy");
		clap.attack("scav");
	}

	std::cout << partition << std::endl;
	std::cout << "SCAVTRAP\n";
	std::cout << partition << std::endl;

	ScavTrap	scav("scav");
	scav.attack("clappy");
	scav.takeDamage(1);
	scav.guardGate();
	scav.beRepaired(23);
	std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;

	std::cout << partition << std::endl;
	std::cout << partition << std::endl;
	ScavTrap scav2(scav);
	scav.attack("clappy");
	scav.takeDamage(1);
	scav.guardGate();
	scav.beRepaired(23);
	std::cout << "Scav energy points: " << scav.getEnergyPoints() << std::endl;
	std::cout << partition << std::endl;
	std::cout << partition << std::endl;
}
