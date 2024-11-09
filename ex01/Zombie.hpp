/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:16:45 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/09 20:57:20 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

/// @brief The Zombie class for the Zombie object.
/// @brief New in C++:
/// private: name
/// public: the constructor, destructor, and announce function.
class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce() const;
		void	setName(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif