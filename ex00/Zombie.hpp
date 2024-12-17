/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:16:45 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/17 15:54:51 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

/// @brief The Zombie class for the Zombie object.
/// private: name
/// public: the constructor, destructor, and announce function.
class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce() const;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
