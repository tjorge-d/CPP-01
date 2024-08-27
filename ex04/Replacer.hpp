#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <string.h>

class Replacer
{
	private:
		std::string		_s1;
		std::string		_s2;
		std::string 	_newFileContent;
		std::fstream	_newFile;
		std::fstream	_oldFile;

	public:
		Replacer();
		~Replacer();
		bool	setNewFile(std::string NewFile);
};

#endif