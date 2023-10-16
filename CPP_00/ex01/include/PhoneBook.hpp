/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:24:19 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/06 18:24:19 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdlib.h>
#include "Contact.hpp"

class PhoneBook{
private:
	Contact			list[8];
	std::string		_userInput;
	int				_entry;
	void			_putContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	void			_replaceOldestContact();
	bool            _displayExtract(void);
	bool            _displayData(std::string user_input);

public:
		PhoneBook (void);
	~PhoneBook (void);

	int		getInfo(void);
	int		searchEntries(void);
	void	showInstruction(void);
	
};

#endif