/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:54:09 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/29 20:50:26 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

int get_input(std::string &dest, std::string msg)
{
    while (true) // Boucle pour redemander l'input si nécessaire
    {
        std::cout << msg << std::endl;

        if (!std::getline(std::cin, dest)) // Gestion de Ctrl+D (EOF)
        {
            std::cout << "Error\nEOF detected, end of program" << std::endl;
            dest.clear();
            return (1);
        }

        if (!dest.empty()) // Si l'input est valide, on sort de la boucle
            return 0;

        std::cout << "Input cannot be empty" << std::endl;
    }
    return(0);
}

int ft_stoi(std::string str)
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