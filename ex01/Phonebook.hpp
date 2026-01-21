#pragma once

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
	private:
		static constexpr int	_max = 8;
		Contact _contact[_max];
		int	_pos;
		int _size;
	
	public:
		Phonebook();
		void	addContact();
};
