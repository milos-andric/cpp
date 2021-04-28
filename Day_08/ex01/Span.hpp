#pragma once

# include <iostream>
# include <string>
# include <set>

class Span
{

	public:

		Span(unsigned int nbr);
		Span(Span const & src);
		virtual ~Span();

		Span &		operator=(Span const & rhs);

		void 	addNumber(int num);
		void 	print(void);

		int		shortestSpan(void);
		int		longestSpan(void);


		std::multiset<int> 		getSet(void) const;
		unsigned int			getSize(void) const;

		class ManyNumbersException : public std::exception
		{
			const char * what () const throw ()
			{
				return "too many number in set";
			}
		};

		class NoNumbersException : public std::exception
		{
			const char * what () const throw ()
			{
				return "not enought number in set";
			}
		};

	private:

		Span();
		std::multiset<int>			_set;
		unsigned int				_size;

};
