#pragma once

# include <iostream>
# include <string>
# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{

	public:
		typedef typename MutantStack<T>::container_type::iterator		iterator;
		typedef typename MutantStack<T>::container_type::const_iterator	const_iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator		reverse_iterator;
		typedef typename MutantStack<T>::container_type::const_reverse_iterator	const_reverse_iterator;


		// MutantStack() : std::stack<T>(0);
		// MutantStack() : std::stack<T>(0);
		// ~MutantStack() : std::stack<T>(0);

		iterator		begin() { return(this->c.begin()); };
		const_iterator	begin() const { return(this->c.begin()); };

		iterator 		end() { return(this->c.end()); };
		const_iterator 	end() const { return(this->c.end()); };

		reverse_iterator		rbegin() { return(this->c.rbegin()); };
		const_reverse_iterator	rbegin() const { return(this->c.rbegin()); };

		reverse_iterator 		rend() { return(this->c.rend()); };
		const_reverse_iterator 	rend() const { return(this->c.rend()); };

};
