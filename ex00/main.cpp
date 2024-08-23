#include "Zombie.h"

int	main()
{
	std::cout << "Creating a Zombie in stack.\n";
	Zombie arlindo("Arlindo");
	arlindo.announce();

	std::cout << "\nCreating a Zombie in heap.\n";
	Zombie *inacio = newZombie("Inacio");
	inacio->announce();

	std::cout << "\nCreating a Zombie outside the scope.\n";
	randomChump("Americo");
	std::cout << "Americo got destructed before the ending of the program because he left his scope.\n\n";

	delete inacio;
	std::cout << "Inacio got deleted because otherwise we would have leaks.\n";

	std::cout << "\nArlindo's destructor is going to be called in the end of the program\nbecause it was created in the stack.\n";
}