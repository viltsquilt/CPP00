#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
}

int		PhoneBook::countSize(int size)
{
	if (size < 8)
	{
		size++;
	}
	_size = size;
	return (_size);
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

std::string	takeInput()
{
	std::string	input;

	while (1)
	{
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			std::cout << GREEN << "Phonebook closed" << RESET << std::endl;
			std::cout << std::endl;
			exit(0);
		}
		if (input.empty())
		{
			std::cout << RED << "Input cannot be empty" << RESET << std::endl;
		}
		else
			break;
	}
	return (input);
}

void	PhoneBook::addContact(int _pos)
{
	std::string input;

	std::getline(std::cin, input);
	std::cout << BLUE << "Insert first name" << RESET << std::endl;
	input = takeInput();
	_contact[_pos].setFirstName(input);

	std::cout << BLUE << "Insert last name" << RESET << std::endl;
	input = takeInput();
	_contact[_pos].setLastName(input);

	std::cout << BLUE << "Insert nickname" << RESET << std::endl;
	input = takeInput();
	_contact[_pos].setNickName(input);

	std::cout << BLUE << "Insert phone number" << RESET << std::endl;
	input = takeInput();
	_contact[_pos].setPhoneNumber(input);

	std::cout << BLUE << "Insert darkest secret" << RESET << std::endl;
	input = takeInput();
	_contact[_pos].setDarkestSecret(input);
}

void	PhoneBook::listContacts(int size)
{
	int len;
	std::string word;

	std::cout << std::endl;
	std::cout << GREEN << "     Index|First Name| Last Name|  Nickname" << RESET << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout <<"         ";
		std::cout << GOLD << i << RESET;
		std::cout << BLUE << "|" << RESET;
		
		len = (int)_contact[i].getFirstName().length();
		if (len < 10)
		{
			for (int it = len; it < 10; it++)
			{
				std::cout << " ";
			}
			std::cout << GOLD << _contact[i].getFirstName() << RESET;
		}
		else
		{
			word = _contact[i].getFirstName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << GOLD << word[j] << RESET;
			}
			std::cout << GOLD << "." << RESET;
		}
		std::cout << BLUE << "|" << RESET;
		
		len = (int)_contact[i].getLastName().length();
		if (len < 10)
		{
			for (int it = len; it < 10; it++)
			{
				std::cout << " ";
			}
			std::cout << GOLD << _contact[i].getLastName() << RESET;
		}
		else
		{
			word = _contact[i].getLastName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << GOLD << word[j] << RESET;
			}
			std::cout << GOLD << "." << RESET;
		}
		std::cout << BLUE << "|" << RESET;

		len = (int)_contact[i].getNickName().length();
		if (len < 10)
		{
			for (int it = len; it < 10; it++)
			{
				std::cout << " ";
			}
			std::cout << GOLD << _contact[i].getNickName() << RESET;
		}
		else
		{
			word = _contact[i].getNickName();
			for (int j = 0; j < 9; j++)
			{
				std::cout << GOLD << word[j] << RESET;
			}
			std::cout << GOLD << "." << RESET;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::showContact(std::string input, int size)
{
	int	pos;

	if (input[0] >= 48 && input[0] <= 55)
	{
		pos = input[0] - 48;
		if (pos < size)
		{
			std::cout << std::endl;
			std::cout << BLUE << "First name: " << RESET + _contact[pos].getFirstName() << std::endl;
			std::cout << BLUE << "Last name: " << RESET + _contact[pos].getLastName() << std::endl;
			std::cout << BLUE << "Nickname: " << RESET + _contact[pos].getNickName() << std::endl;
			std::cout << BLUE << "Phone number: " << RESET + _contact[pos].getPhoneNumber() << std::endl;
			std::cout << BLUE << "Darkest secret: " << RESET + _contact[pos].getDarkestSecret() << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << RED << "Index must be between 0 - " << size << RESET << std::endl;
			std::cout << std::endl;
			return ;
		}
	}
	else if (std::cin.eof())
	{
		std::cout << std::endl;
		std::cout << GREEN << "Phonebook closed" << RESET << std::endl;
		std::cout << std::endl;
		exit(0);
	}
	else
	{
		std::cout << RED << "Invalid index" << RESET << std::endl;
		std::cout << std::endl;
		return ;
	}
}
