#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form : public std::exception
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
		void			execute(Bureaucrat const & executor) const;

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

		class NotSignedException : public std::exception
		{
			const char * what () const throw ()
			{
				return "not signed";
			}
		};

	protected:

		std::string const		_name;
		bool 					_signed;
	 	int const				_sign_lvl;
	 	int const				_exec_lvl;

		virtual void	action(Bureaucrat const & executor) const = 0;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */