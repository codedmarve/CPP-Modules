/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:01:20 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/07 12:01:20 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif