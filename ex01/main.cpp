/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:02:15 by tcohen            #+#    #+#             */
/*   Updated: 2025/02/04 15:35:15 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


bool add_alpha(std::string &str, std::string msg)
{
	while(true) 
	{
		if (get_input(str, msg) == 1)
			return (1);
		if (only_alpha(str) == 0)
		{
			std::cout << "Error/nPlease use alphabetic chars only" << std::endl;
			str.clear();
			continue ;
		}
		else
			break;
	}
	return (0);
}

int add_contact(PhoneBook *book)
{
	std::string first_name("");
	std::string last_name("");
	std::string nickname("");
	std::string phone_nb("");
	std::string secret("");

	if (add_alpha(first_name, "Enter first name\n") == 1)
		return (1);
	if (add_alpha(last_name, "Enter last name\n") == 1)
		return (1);
	if (add_alpha(nickname, "Enter nickname\n") == 1)
		return (1);
	while(true) 
	{
		if (get_input(phone_nb, "Enter phone number\n") == 1)
			return (1);
		if (only_nb(phone_nb) == 0)
		{
			std::cout << "Error/nPlease use number only" << std::endl;
			phone_nb.clear();
			continue ;
		}
		else
			break;
	}
	if (get_input(secret, "Enter darkest secret\n") == 1)
		return (1);
	book->add(first_name, last_name, nickname, phone_nb, secret);
	return (0);
}
int main()
{
    std::string cmd;
    PhoneBook book;
    
    while(true)
    {
        if (get_input(cmd, "Type your command\n") == 1)
            return (1);
        if (cmd.compare("SEARCH") == 0)
            book.search();
        if (cmd.compare("EXIT") == 0)
            return (0);
        if (cmd.compare("ADD") == 0)
        {
            if (add_contact(&book) == 1)
                return (1);
        }
		else
			std::cout << "Error/nInvalid command" << std::endl;
    }
    return (0);
}



