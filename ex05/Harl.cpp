/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:23:59 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/14 17:45:24 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/// @brief Harl constructor.
Harl::Harl() {}

/// @brief Harl complains in different levels of whining.
void	Harl::debug(void)
{
	std::cout << "DEBUG:\n I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "INFO:\n I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING:\n  I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR:\n This is unacceptable! I want to speak to the manager now." << std::endl;
}


/// @brief Harl complains in different levels of whining.
/// @param whining the level of whining. (DEBUG, INFO, WARNING, ERROR)
/// @brief new in C++:
/// std::make_pair(first, second) (c++98) is a template function that creates a pair of two values for
/// the pair class.
/// std::pair<first, second> (c++98) is a template class that stores two values of different types.
/// it is used to store the level of whining and the function that should be called.
/// complaining.first is checking the level of whining its (DEBUG, INFO, WARNING, ERROR)
/// this->*complaining.second is calling the function that should be called.
/// If no suitable level of whining is found we come out of the while loop and
/// print an message.
void	Harl::complain(const std::string& whining)
{
	int i = 0;
	
	const std::pair<std::string, void (Harl::*)(void)> complains[4] =
	{
		std::make_pair("DEBUG", &Harl::debug),
		std::make_pair("INFO", &Harl::info),
		std::make_pair("WARNING", &Harl::warning),
		std::make_pair("ERROR", &Harl::error)
	};

	while (i < 4)
	{
		if (whining == complains[i].first)
		{
			(this->*complains[i].second)();
			return ;
		}
		i++;
	}
	std::cout << "Harl is Exploding, unknown level of whining. " << whining << std::endl;
}

// /// @brief Harl complains in different levels of whining.
// /// @param whining the level of whining. (DEBUG, INFO, WARNING, ERROR)
// /// @brief new in C++:
// /// const auto& (c++11 not 98) complaining : complains is a range-based for loop that iterates
// /// over the array complains but only one time.
// /// std::pair (c++98) is a template class that stores two values of different types.
// /// it is used to store the level of whining and the function that should be called.
// /// complaining.first is checking the level of whining its (DEBUG, INFO, WARNING, ERROR)
// /// this->*complaining.second is calling the function that should be called.
// /// If no suitable level of whining is found we come out of the for loop and
// /// print an message.
// void	Harl::complain(const std::string& whining)
// {
// 	const std::pair<std::string, void (Harl::*)(void)> complains[] =
// 	{
// 		{"DEBUG", &Harl::debug},
// 		{"INFO", &Harl::info},
// 		{"WARNING", &Harl::warning},
// 		{"ERROR", &Harl::error}
// 	};

// 	for (const auto& complaining : complains)
// 	{
// 		if (whining == complaining.first)
// 		{
// 			(this->*complaining.second)();
// 			return ;
// 		}
// 	}
// 	std::cout << "Harl is Exploding, unknown level of whining. " << whining << std::endl;
// }
