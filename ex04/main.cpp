/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:49:01 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/17 16:33:53 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/// @brief tries to open the input fl and create or open output file fl.replace.
/// @param fl the file to read and to create a new file .replace
/// @param infile reference to the input file stream
/// @param outfile reference to the output file stream to write or create the file.
/// @return true if both files could be opened, false otherwise.
/// @brief new in C++:
/// .open() opens a file with the given name.
/// .c_str() returns a pointer to an array that contains a null-terminated
/// sequence of characters representing the current value of the string.
/// If the file does not exist, it will be created by the ofstream reference of outfile.
bool	handle_file(const std::string& fl, std::ifstream& infile, std::ofstream& outfile)
{
	infile.open(fl.c_str());
	if (!infile)
	{
		std::cerr << "Error, could not open infile. \n" << std::endl;
		return (false);
	}
	outfile.open((fl + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error, failed creating output file. \n" << std::endl;
		return (false);
	}
	return (true);
}

/// @brief replaces all occurences of s1 in l with s2 and writes the result to
/// outfile.replace. 
/// @param argc the number of arguments passed to the program.
/// @param argv the arguments passed to the program.
/// @brief new in C++:
/// ifstream is a class that represents an input file stream. only used for reading.
/// ofstream is a class that represents an output file stream. only used for writing
/// if the file does not exist, it will be created by the ofstream reference of outfile.
/// @attention we have to check for argc != 4 before we create the ifstram and ofstream
/// else we would have to close them in before return.
/// .close() closes the file which i open in the handle_file function.
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace filename.txt s1 s2 \n" << std::endl;
		return (1);
	}
	std::string		fl = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	infile;
	std::ofstream	outfile;
	
	if  (s1.empty())
	{
		std::cerr << "Errror, s1 is empty. \n" << std::endl;
		return (1);
	}
	if (!handle_file(fl, infile, outfile))
		return (1);
	std::ostringstream outStringStream;
	outStringStream << infile.rdbuf();
	std::string fileText = outStringStream.str();
	
	myReplace(fileText, s1, s2, outfile);
	infile.close();
	outfile.close();
	return (0);
}
