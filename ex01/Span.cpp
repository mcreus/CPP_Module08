/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <mcreus@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:58:18 by mcreus            #+#    #+#             */
/*   Updated: 2023/10/31 10:17:49 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    
}

Span::Span(unsigned int N) : _capacity(N)
{
    _numbers.reserve(N);
}

Span::Span(Span const &other)
{
    *this = other;
}

Span    &Span::operator=(Span const &s)
{
    _capacity = s._capacity;
    _numbers = s._numbers;
    return (*this);
}

Span::~Span()
{

}

void    Span::addNumber(int i)
{
	std::vector<int>::iterator	it = _numbers.begin();
	if (_numbers.size() >= _capacity)
		throw CompleteArrayInt();
	else
	{
		//while (_numbers.size() < _capacity)
		//{
			//i *= 2;
			_numbers.insert(it, i);
			//std::cout << *it << std::endl;
			//i++;
		//}
	}
}

int	Span::shortestSpan()
{
	std::sort(_numbers.begin(), _numbers.end());
	int	minSpan = std::numeric_limits<int>::max();
	size_t	i = 1;
	while (i < _numbers.size())
	{
		int shortestSpan = _numbers[i] - _numbers[i - 1];
		if (shortestSpan < minSpan)
			minSpan = shortestSpan;
		i++;
	}
	return (minSpan);
}

int	Span::longestSpan()
{
	std::sort(_numbers.begin(), _numbers.end());
	int longestSpan = _numbers.back() - _numbers.front();
	return (longestSpan);
}