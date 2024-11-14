/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:23:10 by wdegraf           #+#    #+#             */
/*   Updated: 2024/11/14 17:36:17 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <utility>

/// @brief Harl class that can complain in different levels of whining.
class Harl
{
	public:
	Harl();
	void complain(const std::string& whining);

	private:
	void	debug();
	void	info();
	void	warning();
	void	error();
};

#endif
