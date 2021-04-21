#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
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