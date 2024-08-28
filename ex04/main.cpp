#include "Replacer.hpp"

bool validator(int arg_nb, char* arg[])
{
	if (arg_nb != 4)
	{
		std::cout << "Invalid number of arguments.\n";
		return (false);
	}
	if (!arg[1][0])
	{
		std::cout << "Invalid file name.\n";
		return (false);
	}
	return (true);
}

Replacer	*parser(int arg_nb, char* arg[])
{
	if (!validator(arg_nb, arg))
		return (NULL);
	Replacer *replacer = new Replacer();
	if (!replacer)
	{
		std::cout << "Error creating the class.\n";
		return (NULL);
	}
	if (!replacer->setNewFile(arg[1]))
	{
		replacer->filesCloser();
		delete replacer;
		return (NULL);
	}
	return (replacer);
}

int main(int argc, char* argv[])
{
	Replacer *replacer = parser(argc, argv);
	if (!replacer)
		return(2);
	replacer->replace(argv[2], argv[3]);
	delete replacer;
}