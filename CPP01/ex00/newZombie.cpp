/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:32:07 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/21 21:32:07 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		newZombie( std::string name )
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	return (zombie);
}