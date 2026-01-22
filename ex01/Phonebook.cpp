#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

int		Phonebook::countSize(int pos)
{
	if (pos >= _max - 1)
	{
		pos = -1;
	}
	pos++;
	_pos = pos;
	return (_pos);
}

void	Phonebook::addContact(int _pos)
{
	std::string input;

	std::cout << "Insert first name" << std::endl;
	std::cin >> input;
	_contact[_pos].setFirstName(input);

	std::cout << "Insert last name" << std::endl;
	std::cin >> input;
	_contact[_pos].setLastName(input);

	std::cout << "Insert nickname" << std::endl;
	std::cin >> input;
	_contact[_pos].setNickName(input);

	std::cout << "Insert phone number" << std::endl;
	std::cin >> input;
	_contact[_pos].setPhoneNumber(input);

	std::cout << "Insert darkest secret" << std::endl;
	std::cin >> input;
	_contact[_pos].setDarkestSecret(input);
}

void	Phonebook::listContact(std::string input)
{
	int	pos;

	if (input[0] >= 48 && input[0] <= 55)
	{
		pos = input[0] - 48;
		std::cout << "First name: " + _contact[pos].getFirstName() << std::endl;
		std::cout << "Last name: " + _contact[pos].getLastName() << std::endl;
		std::cout << "Nickname: " + _contact[pos].getNickName() << std::endl;
		std::cout << "Phone number: " + _contact[pos].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " + _contact[pos].getDarkestSecret() << std::endl;
	}
	else
		return ;
}
