#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form();
		Form(std::string name, int sign, int exec);
		Form( Form const & src );
		virtual ~Form() _NOEXCEPT;

		Form &		operator=( Form const & rhs );

		std::string		getName(void) const;
	 	int				getSignLvl(void) const;
	 	int				getExecLvl(void) const;
		bool			getSignStatus(void) const;

		void			beSigned(Bureaucrat & b);

		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ()
			{
				return "too high";
			}
		};

		class GradeTooLowException : public std::exception
		{
			const char * what () const throw ()
			{
				return "too low";
			}
		};

		class AlreadySignedException : public std::exception
		{
			const char * what () const throw ()
			{
				return "already signed";
			}
		};

	private:

		std::string const		_name;
		bool 					_signed;
	 	int const				_sign_lvl;
	 	int const				_exec_lvl;


};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */