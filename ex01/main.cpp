/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:13 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 20:47:45 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief main creates a Zombie object and a randomChump.
/// @brief Whats new C++? 
/// delete[] zombies: Deletes the array of Zombies on the heap.
/// check zombieHorde.cpp for ZombieHorde function,
/// default constructor and setName function.
int	main(void)
{
	int		i = 0;
	int		num;

	std::cout << "How many Zombies do you see? ";
	std::cin >> num;
	if (num < 0)
	{
		std::cout << "Dont lie! You can't see a negative number of Zombies! " << std::endl;
		return (0);
	}
	Zombie*	zombies = zombieHorde(num, "Zombie");
	while (i < num)
		zombies[i++].announce();
	delete[] zombies;
	return (0);
}
