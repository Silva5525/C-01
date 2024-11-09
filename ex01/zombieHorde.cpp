/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:53:39 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 20:40:42 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief member variable assignment function for zombieHorde.
/// Zombie of heap allocation. like newZombie but with a different name.
/// @brief New in C++:
/// this: It’s a pointer to the current object of the class for example Zombie1.
/// this->name: Accesses the name attribute of the current object.
/// = name Refers to the parameter name passed into the function.
/// @param name Name for the new Zombie object.
void	Zombie::setName(std::string name)
{
	this->name = name;
}

/// @brief New in C++: This Function called default constructor.
Zombie::Zombie() : name(" We are Legion ") {}

/// @brief zombieHorde creates an array of Zombies on the heap.
/// @brief New in C++:
/// @param N Number of Zombies to create.
/// @param name Name for the new Zombie object.
/// @return a pointer to the new Zombie object.
Zombie*	zombieHorde(int N, std::string name)
{
	int		i = 0;

	if (N < 0)
		return (NULL);
	Zombie*	zombies = new Zombie[N];
	while (i < N)
		zombies[i++].setName(name);
	return (zombies);
}