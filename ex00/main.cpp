/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:13 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 18:06:53 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief main creates a Zombie object and a randomChump.
/// @brief Whats new C++? Constructore and Destructors are newZombie.cpp
/// A constructor is a member function that is called when an object is created.
/// A destructor is a member function that is called when an object is destroyed.
/// new is an operator that is used to allocate memory for an object and return
/// a pointer to it.
/// delete is an operator that is used to destroy an object created by new.
int	main(void)
{
	Zombie* zombie = newZombie("Zombie eats the Heap!");
	zombie->announce();
	delete zombie;

	randomChump("randomChump eats the Stack!");
	
	return (0);
}
