/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:08:09 by moduwole          #+#    #+#             */
/*   Updated: 2023/06/14 19:08:09 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CPP
#define CONTACT_CPP

#include <iostream>
#include <iomanip>

class Contact{
private:
	std::string    _firstName;
	std::string    _lastName;
	std::string    _nickName;
	std::string    _phoneNumber;
	std::string    _darkestSecret;

public:
	Contact (void);
	~Contact (void);

	int		index;
	void	addEntry(int entry, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	void	putName(void);
	void    putEntry(void);
};


#endif