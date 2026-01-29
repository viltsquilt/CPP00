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
		std::cin >> input;
		if (input == "ADD")
		{
			pos = pb.countPos(pos);
			pb.addContact(pos);
		}
		else if (input == "SEARCH")
		{
			size = pb.countSize();
			pb.listContacts(size);
			std::string	index;
			std::cout << "Insert index of entry to display" << std::endl;
			std::cin >> index;
			pb.showContact(index);
		}
	}
	return (0);
}
