#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <iterator>

template< typename T >
class MutantStack : public std::stack<T>
{
    public:

        typedef typename std::stack<T>::container_type::iterator    iterator;
        MutantStack()
        {

        }

        MutantStack(MutantStack const &other)
        {
            *this = other;
        }

        MutantStack  &operator=(MutantStack const &m)
        {
            *this = m;
            return (*this);
        }

        ~MutantStack()
        {

        }

        iterator    begin()
        {
            return (this->c.begin());
        }

        iterator    end()
        {
            return (this->c.end());
        }
};

#endif