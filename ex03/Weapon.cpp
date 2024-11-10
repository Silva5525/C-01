/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:06 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 13:20:10 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/// @brief constructor for the Weapon class.
/// @param type of the weapon.
Weapon::Weapon(const std::string& type) : type(type) {}

/// @brief geter for the type of the weapon.
/// @return type of the weapon.
const std::string&	Weapon::getType() const
{
	return (type);
}

/// @brief setter for the type of the weapon.
/// @param newType will replace the old type.
void	Weapon::setType(const std::string& newType)
{
	type = newType;
}
