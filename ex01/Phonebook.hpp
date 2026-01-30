#pragma once

#include <iostream>
#include <string>
#include <cstring>
#include "Contact.hpp"

// Reset
#define RESET "\033[0m"

//Colors
#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[94m"
#define GOLD	"\033[33m"

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
		int		countSize(int size);
		void	showContact(std::string pos, int size);
		void	listContacts(int pos);
};
