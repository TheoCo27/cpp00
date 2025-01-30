/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:18:46 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/30 16:40:27 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    std::string str;

    if (argc != 2)
    {
        std::cout << "Error" << std::endl << "Need one phrase as argument" << std::endl;
        return (1);
    }
    str = argv[1];
    size_t len = str.length();
    for (int i = 0; i < len; i++)
        str[i] = std::toupper(str[i]);
    std::cout << str << std::endl;
    return (0);
}