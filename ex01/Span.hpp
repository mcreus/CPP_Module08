#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <deque>
# include <iterator>
# include <limits>

class Span
{
	public:
		Span();
		Span(unsigned int N);
		Span(Span const &other);
		Span		&operator=(Span const &s);
		~Span();
		void		addNumber(int i);
		class CompleteArrayInt : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Your Array is full!!!\n");
			}
		};
		int			shortestSpan();
		int			longestSpan();

	private:

		unsigned int		_capacity;
		std::vector<int>	_numbers;

};

#endif