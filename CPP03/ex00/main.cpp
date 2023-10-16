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

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap d("sa");
	}

	ClapTrap	clap("clappy");
	ClapTrap	trap("trappy");

	clap.setAttackDamage(2);
	for (int i = 0; i < 11; i++)
		clap.attack("trappy");
	std::cout << "Clap attack damage: " << clap.getAttackDamage() << std::endl;
	trap.attack("clappy");
	for (int i = 0; i < 3; i++)
	{
		trap.takeDamage(2);
		std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	}
	trap.beRepaired(5);
	std::cout << "Trap hit point: " << trap.getHitPoints() << std::endl;
	std::cout << "Trap energy point: " << trap.getEnergyPoints() << std::endl;
}