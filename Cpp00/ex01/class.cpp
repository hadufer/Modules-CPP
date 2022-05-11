#include "class.h"
#include <cstddef>
#include <string>

Contact::Contact(char *firstName, char *lastName, char *nickName, char *phoneNumber, char *darkestSecret)
{
	if (firstName)
		this->firstName = strdup(firstName);
	else
		this->firstName = NULL;
	if (lastName)
		this->lastName = strdup(lastName);
	else
		this->lastName = NULL;
	if (nickName)
		this->nickName = strdup(nickName);
	else
		this->nickName = NULL;
	if (phoneNumber)
		this->phoneNumber = strdup(phoneNumber);
	else
		this->phoneNumber = NULL;
	if (darkestSecret)
		this->darkestSecret = strdup(darkestSecret);
	else
		this->darkestSecret = NULL;
}

Contact::Contact(const Contact &c)
{
	if (this->firstName)
		delete [] this->firstName;
	this->firstName = strdup(c.firstName);
	if (this->lastName)
		delete [] this->lastName;
	this->lastName = strdup(c.lastName);
	if (this->nickName)
		delete [] this->nickName;
	this->nickName = strdup(c.nickName);
	if (this->phoneNumber)
		delete [] this->phoneNumber;
	this->phoneNumber = strdup(c.phoneNumber);
	if (this->darkestSecret)
		delete [] this->darkestSecret;
	this->darkestSecret = strdup(c.darkestSecret);
}

Contact::~Contact()
{
	if (this->firstName)
	 delete [] this->firstName;
	if (this->lastName)
	 delete [] this->lastName;
	if (this->nickName)
	 delete [] this->nickName;
	if (this->phoneNumber)
	 delete [] this->phoneNumber;
	if (this->darkestSecret)
	 delete [] this->darkestSecret;
}

Contact &Contact::operator=(const Contact &c)
{
	this->firstName = c.firstName;
	this->lastName = c.lastName;
	this->nickName = c.nickName;
	this->phoneNumber = c.phoneNumber;
	this->darkestSecret = c.darkestSecret;
	return *this;
}

PhoneBook::PhoneBook()
{
	tab_index = 0;
	for (int i = 0; i <= 7; i++)
	{
		tab[i] = Contact();
	}
}

PhoneBook::PhoneBook(const PhoneBook &p)
{
	tab_index = p.tab_index;
	for (int i = 0; i <= 7; i++)
	{
		if (tab[i].firstName)
			tab[i] = p.tab[i];
	}
}

PhoneBook::~PhoneBook()
{
	tab_index = 0;
	for (int i  = 0; i <= 7; i++)
	{
		if (tab[i].firstName)
			tab[i].~Contact();
	}
}

PhoneBook &PhoneBook::operator=(const PhoneBook &c)
{
	tab_index = c.tab_index;
	for (int i = 0; i <= 7; i++)
	{
		if (tab[i].firstName)
			tab[i] = c.tab[i];
	}
	return *this;
}

void PhoneBook::add(const Contact &c)
{
	if (tab_index == 7)
		tab_index = -1;
	tab[tab_index] = c;
	tab_index++;
}