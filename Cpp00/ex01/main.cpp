#include "class.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <limits>

int	main()
{
	char buff[8];
	char t_firstName[64] = {0};
	char t_lastName[64] = {0};
	char t_nickName[64] = {0};
	char t_phoneNumber[64] = {0};
	char t_darkestSecret[1024] = {0};
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "You can either ADD, SEARCH or EXIT" << std::endl;
		memset(buff, 0, 8);
		std::cin.getline(buff, 8);
		if (strcmp(buff, "ADD") == 0)
		{
			std::cout << "firstname: ";
			memset(t_firstName, 0, 64);
			std::cin.getline(t_firstName, 64);

			std::cout << "lastname: ";
			memset(t_lastName, 0, 64);
			std::cin.getline(t_lastName, 64);

			std::cout << "nickname: ";
			memset(t_nickName, 0, 64);
			std::cin.getline(t_nickName, 64);

			std::cout << "phone number: ";
			memset(t_phoneNumber, 0, 64);
			std::cin.getline(t_phoneNumber, 64);

			std::cout << "darkest secret: ";
			memset(t_darkestSecret, 0, 1024);
			std::cin.getline(t_darkestSecret, 1024);

			if (!*t_firstName || !*t_lastName || !*t_nickName || !*t_phoneNumber || !*t_darkestSecret)
				std::cout << "You need to fill every field (the contact hasn't been created)" << std::endl;
			else
				phoneBook.add(Contact(t_firstName, t_lastName, t_nickName, t_phoneNumber, t_darkestSecret));
		}
		else if (strcmp(buff, "SEARCH") == 0)
		{
			for(int i = 0; i <= 7; i++)
			{
				if (phoneBook.tab[i].firstName)
				{
					std::cout << std::right << std::setw(10) << i + 1 << "|";
					if (strlen(phoneBook.tab[i].firstName) <= 10)
						std::cout << std::right << std::setw(10) << phoneBook.tab[i].firstName << "|";
					else
					{
						char *tmp = strndup(phoneBook.tab[i].firstName, 11);
						tmp[11] = 0;
						memset(tmp + 7, '.', 3);
						std::cout << std::right << std::setw(10) << tmp << "|";
						delete [] tmp;
					}
					if (strlen(phoneBook.tab[i].lastName) <= 10)
						std::cout << std::right << std::setw(10) << phoneBook.tab[i].lastName << "|";
					else
					{
						char *tmp = strndup(phoneBook.tab[i].lastName, 11);
						tmp[11] = 0;
						memset(tmp + 7, '.', 3);
						std::cout << std::right << std::setw(10) << tmp << "|";
						delete [] tmp;
					}
					if (strlen(phoneBook.tab[i].nickName) <= 10)
						std::cout << std::right << std::setw(10) << phoneBook.tab[i].nickName << "|" << std::endl;
					else
					{
						char *tmp = strndup(phoneBook.tab[i].nickName, 11);
						tmp[11] = 0;
						memset(tmp + 7, '.', 3);
						std::cout << std::right << std::setw(10) << tmp << "|" << std::endl;
						delete [] tmp;
					}
				}
			}
			std::cout << "Choose an index to inspect" << std::endl;
			int int_buff = 0;
			std::cin >> int_buff;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			if (int_buff <= 0 || int_buff > 7 || int_buff > phoneBook.tab_index)
				std::cout << "The selected index doesnt exist" << std::endl;
			else
			{
				std::cout << "firstname: " << phoneBook.tab[int_buff - 1].firstName << std::endl;
				std::cout << "lastname: " << phoneBook.tab[int_buff - 1].lastName << std::endl;
				std::cout << "nickname: " << phoneBook.tab[int_buff - 1].nickName << std::endl;
				std::cout << "phone number: " << phoneBook.tab[int_buff - 1].phoneNumber << std::endl;
				std::cout << "darkest secret: " << phoneBook.tab[int_buff - 1].darkestSecret << std::endl;
			}
		}
		else if (strcmp(buff, "EXIT") == 0)
			break ;
	}
}