/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:16:45 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 15:47:05 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>

# include "Weapon.hpp"

/// @brief The HumanB class may have a weapon.
/// private are name and pointer to a weapon.
/// human starts only with a name and can get a weapon
/// later. So we use a pointer to a weapon to make sure
/// weapon can be NULL.
class HumanB
{
	private:
		std::string	name;
		Weapon*		weapon;
	
	public:
		HumanB(const std::string& name);
		void	setWeapon(Weapon& newWeapon);
		void	attack() const;
};

#endif
