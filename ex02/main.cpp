#include <iostream>
#include <string.h>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Memory address of the string variable: " << &string << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of the string variable: " << string << std::endl;
	std::cout << "stringPTR points to: " << *stringPTR << std::endl;
	std::cout << "stringREF points to: " << stringREF << std::endl;
	return (1);
}