#pragma once
#include <cstddef>

class Contact {
	public :
	char	*firstName;
	char	*lastName;
	char	*nickName;
	char	*phoneNumber;
	char	*darkestSecret;

	Contact(char *firstName = NULL, char *lastName = NULL, char *nickName = NULL, char *phoneNumber = NULL, char *darkestSecret = NULL);
	Contact(const Contact &c);
	~Contact();
	Contact &operator=(const Contact &c);
};

class PhoneBook{
	public:
	Contact tab[8];
	int tab_index;

	PhoneBook();
	PhoneBook(const PhoneBook &p);
	~PhoneBook();
	PhoneBook &operator=(const PhoneBook &c);
	void add(const Contact &c);
};