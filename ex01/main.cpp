#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	std::string cmd;
	PhoneBook lameBook;

	while (1)
	{
		std::cout << "Enter a command" << std::endl;
		std::cin >> cmd;
		if (cmd.compare("ADD") == 0)
		{
			if (lameBook.index < 7)
				add(&lameBook.contactList[++lameBook.index]);
			else
			{
				clearContact(&lameBook.contactList[0]);
				add(&lameBook.contactList[0]);
			}
		}
		else if (cmd.compare("SEARCH") == 0)
			search(lameBook);
		else if (cmd.compare("EXIT") == 0)
			break;
		else
			std::cout << "Not a valid command. Enter either ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
