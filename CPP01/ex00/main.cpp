/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 23:36:37 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/21 23:36:37 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = newZombie("clicker");
	zombie->announce();

	Zombie zombie2("runner");
	zombie2.announce();

	randomChump("clicker");

	delete zombie;

	return (0);
}