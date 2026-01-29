#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
}

int		PhoneBook::countSize()
{
	int	i;
	std::string name;

	for (i = 0; i >= _max - 1; i++)
	{
		name = _contact[i].getFirstName();
	}
	return (i);
}

int		PhoneBook::countPos(int pos)
{
	if (pos >= _max - 1)
	{
		pos = -1;
	}
	pos++;
	_pos = pos;
	return (_pos);
}

void	PhoneBook::addContact(int _pos)
{
	std::string input;

	std::getline(std::cin, input);
	std::cout << "Insert first name" << std::endl;
	std::getline(std::cin, input);
	_contact[_pos].setFirstName(input);

	std::cout << "Insert last name" << std::endl;
	std::getline(std::cin, input);
	_contact[_pos].setLastName(input);

	std::cout << "Insert nickname" << std::endl;
	std::getline(std::cin, input);
	_contact[_pos].setNickName(input);

	std::cout << "Insert phone number" << std::endl;
	std::getline(std::cin, input);
	_contact[_pos].setPhoneNumber(input);

	std::cout << "Insert darkest secret" << std::endl;
	std::getline(std::cin, input);
	_contact[_pos].setDarkestSecret(input);
}

void	PhoneBook::listContacts(int size)
{
	int len;
	std::string word;

	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i <= size; i++)
	{
		std::cout <<"         ";
		std::cout << i;
		std::cout << "|";
		
		len = (int)_contact[i].getFirstName().length();
		if (len < 10)
		{
			for (len; len < 10; len++)
			{
				std::cout << " ";
			}
			std::cout << _contact[i].getFirstName();
		}
		else
		{
			word = _contact[i].getFirstName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << word[j];
			}
			std::cout << ".";
		}
		std::cout << "|";
		
		len = (int)_contact[i].getLastName().length();
		if (len < 10)
		{
			for (len; len < 10; len++)
			{
				std::cout << " ";
			}
			std::cout << _contact[i].getLastName();
		}
		else
		{
			word = _contact[i].getLastName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << word[j];
			}
			std::cout << ".";
		}
		std::cout << "|";

		len = (int)_contact[i].getNickName().length();
		if (len < 10)
		{
			for (len; len < 10; len++)
			{
				std::cout << " ";
			}
			std::cout << _contact[i].getNickName();
		}
		else
		{
			word = _contact[i].getNickName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << word[j];
			}
			std::cout << ".";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::showContact(std::string input)
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
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
}
