/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:07:36 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 14:33:58 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/// @brief main creates a string object and a pointer and a reference to it,
/// it prints all tree adresses and values of the string object.
/// I like the fact that Makefile is mandatory for this. xD
/// New in C++: noting new here.
int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "string: " << &brain << std::endl;
	std::cout << "string *pointer: " << stringPTR << std::endl;
	std::cout << "string &Reference: " << &stringREF << std::endl;

	std::cout << "value of string: " << brain << std::endl;
	std::cout << "value of string *pointer: " << *stringPTR << std::endl;
	std::cout << "value of string &Reference: " << stringREF << std::endl;

	return (0);
}