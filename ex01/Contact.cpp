/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:05:56 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/29 20:40:34 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::set_f_name(std::string f_name)
{
    first_name = f_name;
}
void Contact::set_l_name(std::string l_name)
{
    last_name = l_name;
}
void Contact::set_n_name(std::string n_name)
{
    nickname = n_name;
}
void Contact::set_nb(std::string nb)
{
    phone_nb = nb;
}
std::string Contact::get_f_name(void)
{
    return (first_name);
}
std::string Contact::get_l_name(void)
{
    return (last_name);
}
std::string Contact::get_n_name(void)
{
    return (nickname);
}
std::string Contact::get_nb(void)
{
    return (phone_nb);
}

void Contact::set_index(int i)
{
    index = i;
}
int Contact::get_index(void)
{
    return (index);
}
void Contact::set_secret(std::string str)
{
    secret = str;
}
std::string Contact::get_secret(void)
{
    return (secret);
}