/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileData.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moduwole <moduwole@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:44:24 by moduwole          #+#    #+#             */
/*   Updated: 2023/07/03 20:44:24 by moduwole         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEDATA_HPP
#define FILEDATA_HPP

# include <iostream>
# include <fstream>
# include <string>

class FileData {
private:
	std::string _fileName;
	void	_replaceLoop(std::ifstream &inFile, std::ofstream &outFile,
		std::string s1, std::string s2);

public:
	FileData (std::string fileName);
	~FileData ();

	std::string getName() const;
	void replace(std::string s1, std::string s2);
};

#endif