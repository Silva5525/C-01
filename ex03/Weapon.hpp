/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:16:45 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 15:47:02 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

/// @brief The Weapon class for the Weapon object.
/// @brief New in C++.
/// Privat attribute type represents the type of the weapon.
/// Public methods are the constructor, to initialize the weapon with a type,
/// a getter to get the type of the weapon and a setter to set a new type.
/// getType() returns a const refernece to the type.
/// setType() takes a const reference to a string and sets the type to the new value.
/// why using a const reference? Because we don't want to change the string and
/// so we don't have to copy the string.
class Weapon
{
	private:
		std::string	type;
	
	public:
		Weapon(const std::string& type);
		const std::string&	getType() const;
		void	setType(const std::string& newType);
};

#endif
