/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:54:52 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/04 16:02:43 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
class Utils{

	public:
	static int get_input(std::string &dest, std::string msg);
	static int ft_stoi(std::string str);
	static bool only_alpha(std::string str);
	static bool only_nb(std::string str);
	static bool only_print(std::string str);
};

#endif