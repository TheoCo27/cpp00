/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcohen <tcohen@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:05:59 by tcohen            #+#    #+#             */
/*   Updated: 2025/01/29 20:40:42 by tcohen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>
# include <limits>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_nb;
        int index;
        std::string secret;
    public:
        Contact(void)
        {
            index = -1;
            first_name[0] = '\0';
            last_name[0] = '\0';
            nickname[0] = '\0';
            phone_nb[0] = '\0';
        }
        void set_f_name(std::string f_name);
        void set_l_name(std::string l_name);
        void set_n_name(std::string n_name);
        void set_nb(std::string nb);
        std::string get_f_name(void);
        std::string get_l_name(void);
        std::string get_n_name(void);
        std::string get_nb(void);
        void set_index(int i);
        int get_index(void);
        void set_secret(std::string str);
        std::string get_secret(void);
};

#endif