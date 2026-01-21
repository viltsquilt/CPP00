#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

void	Phonebook::addContact()
{
	std::string input;

	std::cout << "Insert first name" << std::endl;
	std::cin >> input;
	_contact[0].setFirstName(input);

	std::cout << "Insert last name" << std::endl;
	std::cin >> input;
	_contact[0].setLastName(input);

	std::cout << "Insert nickname" << std::endl;
	std::cin >> input;
	_contact[0].setNickName(input);

	std::cout << "Insert phone number" << std::endl;
	std::cin >> input;
	_contact[0].setPhoneNumber(input);

	std::cout << "Insert darkest secret" << std::endl;
	std::cin >> input;
	_contact[0].setDarkestSecret(input);

	std::cout << "First name: " + _contact[0].getFirstName() << std::endl;
	std::cout << "Last name: " + _contact[0].getLastName() << std::endl;
	std::cout << "Nickname: " + _contact[0].getNickName() << std::endl;
	std::cout << "Phone number: " + _contact[0].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " + _contact[0].getDarkestSecret() << std::endl;
}   	
    	
    	
