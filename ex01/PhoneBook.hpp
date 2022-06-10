#pragma once
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	public:
	Contact();
	~Contact();
	int			index;
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook
{
	public:
	PhoneBook();
	~PhoneBook();
	int index;
	Contact contactList[8];
};

void	add(Contact *contactList);
void	search(PhoneBook lameBook);
void	clearContact(Contact *contact);
void	exit(void);
void	displayContact(Contact contact);
void	displayContactList(Contact contact[]);