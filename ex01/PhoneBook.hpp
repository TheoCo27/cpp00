/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 23:02:21 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/30 16:39:01 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"
#include "utils.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int     nb_contact;
    public:
        PhoneBook();
        Contact *get_phone_book(void);
        void add(std::string f_name, std::string l_name, std::string n_name, std::string nb, std::string d_secret);
        int search(void);
        void print_phonebook(void);
        void print_contact(int index);
        void set_nb_contact(int nb_c);
        int get_nb_contact(void);
};

#endif