#include "Replacer.hpp"

Replacer::Replacer()
{
	std::cout << "Constructor called\n";
}

Replacer::~Replacer()
{
	std::cout << "Destructor called\n";
}

bool	Replacer::setNewFile(std::string fileName)
{
	// Opening Argument 1
	_oldFile.open(fileName.c_str(), std::ios::in);
	if (!_oldFile.is_open())
	{
		std::cout << "Error while opening File.\n";
		return (false);
	}
	// Opening NewFile
	std::string newFileName = ".replace";
	newFileName.insert(0, fileName);
	_newFile.open(newFileName.c_str(), std::ios::out);
	if (!_newFile.is_open())
	{
		std::cout << "Error while opening NewFile.\n";
		return (false);
	}
	// Copying everything from OldFile to NewFile
	_newFile << _oldFile.rdbuf();
	if (!_newFile.good() || !_oldFile.good())
	{
		std::cout << "Error while copying to NewFile.\n";
		return (false);
	}
	return (true);
}
