#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = -1;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	add(Contact *contactList)
{
		std::cout << "Enter your first name" << std::endl;
		std::cin.clear();
		while (contactList->firstName.empty())
			std::getline(std::cin, contactList->firstName);
		std::cout << "Enter your last name" << std::endl;
		std::cin.clear();
		while (contactList->lastName.empty())
			std::getline(std::cin, contactList->lastName);
		std::cout << "Enter your nickname" << std::endl;
		std::cin.clear();
		while (contactList->nickName.empty())
			std::getline(std::cin, contactList->nickName);
		std::cout << "Enter your phone number" << std::endl;
		std::cin.clear();
		while (contactList->phoneNumber.empty())
			std::getline(std::cin, contactList->phoneNumber);
		std::cout << "Enter your darkest secret" << std::endl;
		std::cin.clear();
		while (contactList->darkestSecret.empty())
			std::getline(std::cin, contactList->darkestSecret);
}

void	search(PhoneBook lameBook)
{
	int index;
	displayContactList(lameBook.contactList);
	std::cout << "Enter the index" << std::endl;
	std::cin >> index;
	switch (index)
	{
	case 1:
		displayContact(lameBook.contactList[0]);
		break;
	case 2:
		displayContact(lameBook.contactList[1]);
		break;
	case 3:
		displayContact(lameBook.contactList[2]);
		break;
	case 4:
		displayContact(lameBook.contactList[3]);
		break;
	case 5:
		displayContact(lameBook.contactList[4]);
		break;
	case 6:
		displayContact(lameBook.contactList[5]);
		break;
	case 7:
		displayContact(lameBook.contactList[6]);
		break;
	case 8:
		displayContact(lameBook.contactList[7]);
		break;
	default:
		std::cout << "Write a good index fuck nugget" << std::endl;
		break;
	}
}

void	exit(void)
{
	std::cout << "gtfo m8" << std::endl;
}

void	clearContact(Contact *contact)
{
	contact->firstName.clear();
	contact->lastName.clear();
	contact->nickName.clear();
	contact->phoneNumber.clear();
	contact->darkestSecret.clear();
}

void	displayContactList(Contact contact[])
{
	int i = -1;
	while (++i <= 7 && (contact[i].firstName.empty() == false))
	{
		std::cout << std::right << std::setw(10) << (i + 1) << "|";
		if (contact[i].firstName.length() > 9)
			std::cout << std::right << std::setw(10) << contact[i].firstName.substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << contact[i].firstName << "|";
		if (contact[i].lastName.length() > 9)
			std::cout << std::right << std::setw(10) << contact[i].lastName.substr(0, 9) << ".|";
		else
			std::cout << std::right << std::setw(10) << contact[i].lastName << "|";
		if (contact[i].nickName.length() > 9)
			std::cout << std::right << std::setw(10) << contact[i].nickName.substr(0, 9) << "|" << std::endl;
		else
			std::cout << std::right << std::setw(10) << contact[i].nickName << std::endl;
	}
}

void	displayContact(Contact contact)
{
	std::cout << contact.firstName << std::endl;
	std::cout << contact.lastName << std::endl;
	std::cout << contact.nickName << std::endl;
	std::cout << contact.phoneNumber << std::endl;
	std::cout << contact.darkestSecret << std::endl;
}

// void	printString(std::string toPrint)
// {
// 	std::cout << 
// }