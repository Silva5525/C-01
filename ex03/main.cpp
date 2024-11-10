/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:13 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/10 14:41:15 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

/// @brief the subjekt main function for testfing.
/// @brief new in C++: In this projekt its about references and pointers.
/// and how to use them in classes. I learned using a reference
/// to a weapon in the HumanA class, becouse it makes sure that the weapon
/// is allways set. I also learned using a pointer to a weapon in
/// the HumanB class, becouse it makes sure that the weapon can be NULL.
/// ... I change the style of pointern and reference to be stiky to the type
/// becouse its a bit more used in the C++ community and i want to get used to
/// change style if needed.
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
