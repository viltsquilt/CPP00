#include "Phonebook.hpp"
#include "Contact.hpp"

int	main()
{
	int	pos = -1;
	std::string	input;
	Phonebook	pb;

	while (input != "EXIT")
	{
		std::cin >> input;
		if (input == "ADD")
		{
			pos = pb.countSize(pos);
			pb.addContact(pos);
		}
		else if (input == "SEARCH")
		{
			std::string	index;
			std::cout << "Insert index of entry to display" << std::endl;
			std::cin >> index;
			pb.listContact(index);
		}
	}
	return (0);
}
