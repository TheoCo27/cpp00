/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:06:04 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/29 22:21:54 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::set_nb_contact(int nb_c)
{
    nb_contact = nb_c;
}
int PhoneBook::get_nb_contact(void)
{
    return (nb_contact);
}

Contact *PhoneBook::get_phone_book(void)
{
    return (contacts);
}


void PhoneBook::add(std::string f_name, std::string l_name, std::string n_name, std::string nb, std::string d_secret)
{
    if (nb_contact == 8)
    {
        contacts[0].set_f_name(f_name);
        contacts[0].set_l_name(l_name);
        contacts[0].set_n_name(n_name);
        contacts[0].set_nb(nb);
        contacts[0].set_secret(d_secret);
        contacts[0].set_index(0);
        nb_contact++;
        return; 
    }
    contacts[nb_contact].set_f_name(f_name);
    contacts[nb_contact].set_l_name(l_name);
    contacts[nb_contact].set_n_name(n_name);
    contacts[nb_contact].set_nb(nb);
    contacts[nb_contact].set_secret(d_secret);
    contacts[nb_contact].set_index(nb_contact);
    nb_contact++;
}

std::string format_str(std::string str)
{
    std::string str_good;

    if (str.length() == 10)
        return (str);
    if (str.length() < 10)
    {
        int nb_space = 10 - str.length();
        std::string to_add(nb_space, ' ');
        return (to_add + str);
    }
    else
    {
        str_good = str.substr(0, 9);
       return (str_good += '.'); 
    }
}
void PhoneBook::print_phonebook(void)
{
    std::cout << format_str("Index") << "|";
    std::cout << format_str("First Name") << "|";
    std::cout << format_str("Last Name") << "|";
    std::cout << format_str("Nickname") << "|" << std::endl;

    int i = 0;
    while(i < nb_contact)
    {
        std::cout << "         " << contacts[i].get_index() << "|";
        std::cout << format_str(contacts[i].get_f_name()) << "|";
        std::cout << format_str(contacts[i].get_l_name()) << "|";
        std::cout << format_str(contacts[i].get_n_name()) << "|" << std::endl;
        i++;
    }

}
void PhoneBook::print_contact(int index)
{
    std::cout << "Index is " << contacts[index].get_index() << std::endl;
    std::cout << "Firstname is " << contacts[index].get_f_name() << std::endl;
    std::cout << "Lastname is " << contacts[index].get_l_name() << std::endl;
    std::cout << "Nickname is " << contacts[index].get_n_name() << std::endl;
    std::cout << "Phone number is " << contacts[index].get_nb() << std::endl;
    std::cout << "Darkest secret is " << contacts[index].get_secret() << std::endl;
}

int PhoneBook::search(void)
{
    std::string index;

    if (nb_contact == 0)
    {
        std::cout << "Empty phonebook\n" << std::endl;
        return (0);
    }
    print_phonebook();
    if (get_input(index, "\nPlease type index of wanted contact") == 1)
        return (1);
    print_contact(ft_stoi(index));
    return (0);
}