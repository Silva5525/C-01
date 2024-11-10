/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:06 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 14:27:21 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/// @brief Constructor for the HumanA class.
/// @param name name of the HumanA object.
/// @param weapon the weapon of the HumanA object.
HumanA::HumanA(const std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

/// @brief attack is a member function that prints the name of the HumanA object
/// and the type of the weapon. weapon is guaranteed to be not NULL by reference.
void	HumanA::attack() const
{
	std::cout << name << " attacks with a " << weapon.getType() << std::endl;
}
