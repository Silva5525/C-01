/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:39:24 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 18:04:04 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/// @brief A Stack created Zombie object with the given name that announces 
/// itself.
/// @param name Given name for the Zombie object.
void	randomChump(std::string name)
{
	Zombie	zombie(name);

	zombie.announce();
}
