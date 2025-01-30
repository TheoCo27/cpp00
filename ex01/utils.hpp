/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:54:52 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/30 16:38:14 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>

int get_input(std::string &dest, std::string msg);
int ft_stoi(std::string str);
bool only_alpha(std::string str);
bool only_nb(std::string str);
bool only_print(std::string str);

#endif