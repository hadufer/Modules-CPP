#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	else if (argc == 2)
	{
		for (size_t i = 0; argv[1][i]; i++)
		{
			
			if (isalpha(argv[1][i]) && islower(argv[1][i]))
				std::cout << static_cast<char>((argv[1][i] - 0x20));
			else
				std::cout << argv[1][i];
		}
		std::cout << "\n";
		return (0);
	}
}