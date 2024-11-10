/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:16:45 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 15:47:09 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

/// @brief The HumanA class has always a weapon.
/// private are name and a reference to a weapon.
/// public is the constructor and the attack function.
/// Since HumanA has allways a weapon, we use a reference
/// to a weapon to make sure weapon is never NULL.
class HumanA
{
	private:
		std::string	name;
		Weapon&		weapon;
	
	public:
		HumanA(const std::string name, Weapon& weapon);
		void	attack() const;
};

#endif
