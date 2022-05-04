#include <cstddef>
#include "class.h"

class Contact {
	char	*firstName;
	char	*lastName;
	char	*nickName;
	char	*phoneNumber;
	char	*darkestSecret;

	public :
	Contact(char *firstName = nullptr, char *lastName = nullptr, char *nickName = nullptr, char *phoneNumber = nullptr, char *darkestSecret = nullptr)
	{
		firstName = this->firstName;
		lastName = this->lastName;
		nickName = this->nickName;
		phoneNumber = this->phoneNumber;
		darkestSecret = this->darkestSecret;
	}
	Contact(const Contact &c)
	{
	}
};

class PhoneBook{
	Contact tab[8] = {};

	public:
		PhoneBook();
		PhoneBook(const PhoneBook &p)
		{
			
		}

};

