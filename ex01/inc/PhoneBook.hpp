/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yu-chen <yu-chen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:07:13 by yu-chen           #+#    #+#             */
/*   Updated: 2024/07/23 15:06:12 by yu-chen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[9];

  public:
	PhoneBook();
	~PhoneBook();
	void handle_add(PhoneBook& pb);
	int check_pb(PhoneBook pb);
	PhoneBook del_one(PhoneBook pb);
	PhoneBook add_i(PhoneBook pb, int i);
	static void	remove_space(std::string& str);
	void display(PhoneBook pb);
};

#endif