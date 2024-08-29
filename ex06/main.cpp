#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
	{
		std::cout << "Invalid number of arguments\n";
		return (2);
	}
	harl.harlFilter(argv[1]);
	return (1);
}