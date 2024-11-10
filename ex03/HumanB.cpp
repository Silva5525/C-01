/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:06 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 14:30:59 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/// @brief Constructor for the HumanB class with a name and a weapon(NULL).
HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

/// @brief sets weapon pointer to reference an existing weapon object,
/// allowing dynamic weapon changes.
void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

/// @brief attack checks if weapon is not NULL. If not, it retrieves 
/// the type of the weapon and prints it. If weapon is NULL, it prints
/// that there is no weapon to attack with.
void	HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with a " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon to attack with." << std::endl;
}