/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleotard <eleotard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:00:10 by eleotard          #+#    #+#             */
/*   Updated: 2022/10/15 23:56:35 by eleotard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
	
	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		get_nb_of_contact(void) const;
		void	set_nb_of_contact(int v);
		void	display_add();
		void	print_phonebook();
	private:
		int			_contact_nb;
		Contact		_contact_tab[8];
};

#endif