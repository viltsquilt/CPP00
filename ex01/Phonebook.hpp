#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

class PhoneBook
{
	private:
		static constexpr int	_max = 8;
		Contact _contact[_max];
		int	_pos;
		int _size;
	
	public:
		PhoneBook();
		void	addContact(int _pos);
		int		countPos(int size);
		int		countSize();
		void	showContact(std::string pos);
		void	listContacts(int pos);
};
