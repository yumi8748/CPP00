/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:25:34 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/24 16:52:06 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

void PhoneBook::handle_add(PhoneBook& pb)
{
	int	i;
	std::string cmd;

	i = pb.check_pb(pb);
	std::cout<< "Current Index: " <<i << std::endl;
	if (i > 7)
	{
		while (true)
		{
			std::cout << "Attention! Maximum number of contacts reached. If you continue, the oldest contact will be deleted to add the new one. (Y/N): ";
			std::getline(std::cin, cmd);
			remove_space(cmd);
			if (cmd == "Y")
			{
				pb = pb.del_one(pb);
				i = 7;
				break ;
			}
			else if (cmd == "N")
				return ;
			else
				std::cout << "Invalid entrance! Try again!\n";
		}
	}
	if (i >= 0)
	{
		pb = pb.add_i(pb, i);
	}
}

int	main(void)
{
	std::string cmd;
	PhoneBook pb;
	int i;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command:";
		std::getline(std::cin, cmd);
		PhoneBook::remove_space(cmd);
		if (cmd.empty())
			continue ;
		else if (cmd == "EXIT")
			break ;
		else if (cmd == "ADD")
			pb.handle_add(pb);
		else if (cmd == "SEARCH")
			pb.display(pb);
		else
			std::cout << "Invalid command! Try again!\n";
	}
}