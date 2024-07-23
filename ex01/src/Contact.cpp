/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:47:20 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/23 14:39:16 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

int     Contact::isnull(Contact contact)
{
    if (contact.first_name.empty())
        return (1);
    return (0);
}

void    Contact::print_info(Contact contact, std::string to_print)
{
	if (to_print.compare("first_name") == 0)
	{
		if (contact.first_name.size() > 10)
            std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << '.';
        else
            std::cout << std::setw(10) << contact.first_name;
	}
	if (to_print.compare("last_name") == 0)
	{
		if (contact.last_name.size() > 10)
			std::cout << std::string(contact.last_name.begin(),
				contact.last_name.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.last_name;
	}
	if (to_print.compare("nickname") == 0)
	{
		if (contact.nickname.size() > 10)
			std::cout << std::string(contact.nickname.begin(),
				contact.nickname.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.nickname;
	}
}

void Contact::display_complete(Contact contact)
{
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_number << std::endl;
	std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}