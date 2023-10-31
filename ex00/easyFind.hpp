#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>


class NotFind : public std::exception
{
	virtual const char *what() const throw()
	{
		return ("Occurence not founded in list \n");
	}
};

template< typename T >
int	easyFind(std::list<T> &listInt, int i)
{
	try
	{
		typename std::list<T>::iterator	it = std::find(listInt.begin(), listInt.end(), i);
		if (it != listInt.end())
		{
			std::cout << "Occurence founded on list" << std::endl;
			return (i);
		}
		else
			throw NotFind();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (-1);
}

#endif