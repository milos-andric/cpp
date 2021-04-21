#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Form.hpp"

class Form;

class Bureaucrat : public std::exception
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual ~Bureaucrat() _NOEXCEPT;

		std::string			getName() const;
		int					getGrade() const;

		Bureaucrat &		operator=(Bureaucrat const & rhs);
		void				change_grade(int lvl);

		void				inc_lvl(void);
		void				dec_lvl(void);

		void				signForm(Form & f);

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

	private:

		std::string	const 	_name;
		int					_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */