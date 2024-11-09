/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:39:05 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 18:04:15 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief Zombie of heap allocation. With new allocatet memory for a new 
/// Zombie object with the given name that announces itself.
/// @param name Name for the new Zombie object.
/// @return a pointer to the new Zombie object.
Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}
