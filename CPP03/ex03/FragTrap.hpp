/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:13:05 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/17 07:13:05 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &frag);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &frag);
	void		highFivesGuys(void);
	void		attack(const std::string &target);
};

#endif