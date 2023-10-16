/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 21:25:23 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/21 21:25:23 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name(name) {}

Zombie::~Zombie() {

	std::cout << this->name << " terminated " << std::endl;
}

void	Zombie::announce(void) {

	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}