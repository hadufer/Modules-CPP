#include "class.h"
#include <iostream>

int	main()
{
	char buff[8];
	char t_firstName[64] = {};
	char t_lastName[64] = {};
	char t_nickName[64] = {};
	char t_phoneNumber[64] = {};
	char t_darkestSecret[1024] = {};
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "You can either ADD, SEARCH or EXIT" << std::endl;
		std::cin.getline(buff, 8);
		if (strcmp(buff, "ADD") == 0)
		{
			std::cout << "firstname: ";
			std::cin.getline(t_firstName, 64);

			std::cout << "lastname: ";
			std::cin.getline(t_lastName, 64);

			std::cout << "nickname: ";
			std::cin.getline(t_nickName, 64);

			std::cout << "phone number: ";
			std::cin.getline(t_phoneNumber, 64);

			std::cout << "darkest secret: ";
			std::cin.getline(t_darkestSecret, 1024);

			if (!*t_firstName || !*t_lastName || !*t_nickName || !*t_phoneNumber || !*t_darkestSecret)
			{
				std::cout << "You need to fill every field (the contact hasn't been created)" << std::endl;
				break ;
			}
			phoneBook.add(Contact(t_firstName, t_lastName, t_nickName, t_phoneNumber, t_darkestSecret));
		}
		else if (strcmp(buff, "SEARCH") == 0)
		{
		}
		else if (strcmp(buff, "PRINT") == 0)
		{
			for(int i = 0; i <= 7; i++)
			{
				if (phoneBook.tab[i].firstName)
				{
					std::cout << "firstname: " << phoneBook.tab[i].firstName << std::endl;
					std::cout << "lastname: " << phoneBook.tab[i].lastName << std::endl;
					std::cout << "nickname: " << phoneBook.tab[i].nickName << std::endl;
					std::cout << "phone number: " << phoneBook.tab[i].phoneNumber << std::endl;
					std::cout << "darkest secret: " << phoneBook.tab[i].darkestSecret << std::endl;
				}
			}
		}
		else if (strcmp(buff, "EXIT") == 0)
			break ;
	}
}