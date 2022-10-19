/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:10 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/19 17:44:52 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		getContact_nb(void) const;
		void	setContact_nb(int n);
		void	add_info_to_contact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number, std::string darkest_secret);
		void	ask_infos_add();
		void	print_phonebook();
		void	print_one_contact(int index);
		
	private:
		int			_contact_nb;
		Contact		_contact_tab[8];
};

#endif