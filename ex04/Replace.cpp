/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdegraf <wdegraf@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:17:06 by wdegraf           #+#    #+#             */
/*   Updated: 2024/12/17 16:17:42 by wdegraf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/// @brief replaces all occurences of s1 in l with s2 and writes the result to
/// outfile.replace.
/// @param l reference too line to replace s1 with s2l
/// @param s1 reference to the string to replace.
/// @param s2 reference to be replaced with s1 in line l.
/// @param outfile reference to the output file stream.
/// @brief new in C++:
/// .find() returns the position of the next(first) occurrence of s1 in l.
/// .substr() we use (pos, next - pos) + s2; to get the substring 
/// between pos and next. so we can replace s1 with s2.
/// @param npos const std::string::size_type notFound = std::string::npos;
/// is a constant that represents the maximum value for size_t. It is used
/// to indicate that the string::find() function did not find the substring.
/// @attention std::find(for container) && std::string::find (for string) are difrent
/// functions/in difrent librarys. (Google it!) )
void	myReplace(const std::string& l, const std::string& s1,
			const std::string& s2, std::ofstream& outfile)
{
	std::string::size_type			pos = 0;
	std::string::size_type			next;
	std::string						out;
	const std::string::size_type	notFound = std::string::npos;

	while (1)
	{
		next = l.find(s1, pos);
		if (next == notFound)
		{
			out += l.substr(pos);
			break;
		}
		out += l.substr(pos, next - pos) + s2;
		pos = next + s1.length();
	}
	outfile << out;
}
