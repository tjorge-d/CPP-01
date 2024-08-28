#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <string.h>

class Replacer
{
	private:
		std::fstream	_newFile;
		std::fstream	_oldFile;

	public:
		Replacer();
		~Replacer();
		bool	setNewFile(std::string NewFile);
		bool	replace(std::string s1, std::string s2);
		void	filesCloser();
};

#endif