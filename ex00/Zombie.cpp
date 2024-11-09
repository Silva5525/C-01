/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:06 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 19:03:47 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief Constructor for the Zombie class.
/// @param name given name for the Zombie object.
Zombie::Zombie(std::string name) : name(name) {}

/// @brief Destructor for the Zombie class.
Zombie::~Zombie()
{
	std::cout << name << " dies a horrible death. " << std::endl;
}

/// @brief announce is a member function that prints the name of the Zombie object.
/// and a message to the console.
void	Zombie::announce() const
{
	std::cout << name << " :: BraiiiiiiinnnzzzZ... " << std::endl;
}
