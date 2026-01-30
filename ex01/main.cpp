#include "Phonebook.hpp"
#include "Contact.hpp"

int	main()
{
	int	pos = -1;
	int	size = 0;
	std::string	input;
	PhoneBook	pb;

	while (input != "EXIT")
	{
		if (std::cin.eof())
		{
			std::cout << GREEN << "Phonebook closed" << RESET << std::endl;
			std::cout << std::endl;
			exit(0);
		}
		std::cout << std::endl;
		std::cout << BLUE << "Enter a command: 'ADD', 'SEARCH' or 'EXIT'" << RESET << std::endl;
		std::cout << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			pos = pb.countPos(pos);
			size = pb.countSize(size);
			pb.addContact(pos);
		}
		else if (input == "SEARCH")
		{
			if (size > 0)
			{
				pb.listContacts(size);
				std::string	index;
				std::cout << BLUE << "Insert index of entry to display" << RESET << std::endl;
				std::cin >> index;
				pb.showContact(index, size);
			}
			else
			{

				std::cout << std::endl;
				std::cout << RED << "No contacts added yet" << RESET << std::endl;
			}
		}
	}
	std::cout << std::endl;
	std::cout << GREEN << "Phonebook closed" << RESET << std::endl;
	std::cout << std::endl;
	return (0);
}
