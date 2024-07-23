/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:47:35 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/23 15:17:03 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	isnum(std::string str, int i)
{
	if (str.size() != 1)
		return (0);
	if (str[0] >= 48 && str[0] <= 48 + i)
		return (1);
	return (0);
}

int PhoneBook::check_pb(PhoneBook pb)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (pb.contacts[i].isnull(pb.contacts[i]))
			break ;
		i++;
	}
	return (i);
}

PhoneBook PhoneBook::del_one(PhoneBook pb)
{
	int	i;

	i = 0;
	while (i < 7)
	{
		pb.contacts[i] = pb.contacts[i + 1];
		i++;
	}
	return (pb);
}

void PhoneBook::remove_space(std::string& str)
{
	str.erase(0, str.find_first_not_of(" \t\v\f\r"));
	str.erase(str.find_last_not_of(" \t\v\r\f") + 1);
}

std::string add_info(std::string msg)
{
	std::string dest;
	std::cout << msg;
	while (1)
	{
		std::getline(std::cin, dest);
		PhoneBook::remove_space(dest);
		if (dest.empty())
			std::cout << "Empty field not valid! Try again!" << std::endl << msg;
		else
			break ;
	}
	return (dest);
}

PhoneBook PhoneBook::add_i(PhoneBook pb, int i)
{
	Contact new_contact(add_info("First name:"), add_info("Last name:"),
		add_info("Nickname:"), add_info("Phone number:"),
		add_info("Darkest secret:"));
	pb.contacts[i] = new_contact;
	return (pb);
}

void	PhoneBook::display(PhoneBook pb)
{
	int	i;
	int max;
	std::string	index;

	if (pb.contacts[0].isnull(pb.contacts[0]))
	{
		std::cout << "Your phonebook is empty!\n";
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
	i = 0;
	while (i < 8)
	{
		if (pb.contacts[i].isnull(pb.contacts[i]))
			break ;
		     std::cout << "|" << std::setw(10) << i << "|";
        contacts[i].print_info(contacts[i], "first_name");
        std::cout << "|";
        contacts[i].print_info(contacts[i], "last_name");
        std::cout << "|";
        contacts[i].print_info(contacts[i], "nickname");
        std::cout << "|\n";
        std::cout << "|-------------------------------------------|" << std::endl;
        i++;
	}
	max = i - 1;
	while (1)
	{
		std::cout<< "Choose an index for more info: ";
		getline(std::cin, index);
		remove_space(index);
		if (index.empty())
			continue ;
		if (isnum(index, max))
			i = index[0] - 48;
		else
        {
            std::cout << "Invalid input number!" << std::endl;
            continue;
        }
		pb.contacts[i].display_complete(pb.contacts[i]);
        break ;
	}
}