/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:54:09 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/04 16:08:33 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool Utils::only_alpha(std::string str)
{
	int i = 0;

	while(str[i])
	{
		if (std::isalpha(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

bool Utils::only_print(std::string str)
{
	int i = 0;

	while(str[i])
	{
		if (std::isprint(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

bool Utils::only_nb(std::string str)
{
	int i = 0;

	while(str[i])
	{
		if (std::isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int Utils::get_input(std::string &dest, std::string msg)
{
    while (true)
    {
        std::cout << msg << std::endl;

        if (!std::getline(std::cin, dest))
        {
            std::cout << "Error\nEOF detected, end of program" << std::endl;
            dest.clear();
            return (1);
        }
		if (only_print(dest) == 0)
		{
			dest.clear();
			std::cout << "Error\nPlease use only printable chars" << std::endl;
			continue;

		}
        if (!dest.empty())
            return 0;

        std::cout << "Error\nInput cannot be empty" << std::endl;
    }
    return(0);
}

int Utils::ft_stoi(std::string str)
{
    int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}