/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:59:55 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/19 15:37:29 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>

class Contact {
	
	public:
		Contact(void);
		~Contact(void);
		void	setContact(std::string first_name, std::string last_name,
			std::string	nickname, std::string phone_number, std::string darkest_secret);
		void	print_contact(int index) const;
		void	print_1_contact(int index) const;
	private :
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif