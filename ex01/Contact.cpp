#include "Contact.hpp"

Contact::Contact(): _firstName("First name"), _lastName("Last name"),
_nickName("Nickname"), _phoneNumber("Phone number"), _darkestSecret("Darkest secret")
{
}

void	Contact::setFirstName(std::string firstName)
{
	_firstName = firstName;
}

std::string	Contact::getFirstName()
{
	return (_firstName);
}

void	Contact::setLastName(std::string lastName)
{
	_lastName = lastName;
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

void	Contact::setNickName(std::string nickName)
{
	_nickName = nickName;
}

std::string	Contact::getNickName()
{
	return (_nickName);
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	_phoneNumber = phoneNumber;
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestSecret);
}
