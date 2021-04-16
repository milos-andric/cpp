#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat(std::string name, unsigned char grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		std::string			getName() const;
		unsigned char		getGrade() const;

		Bureaucrat &		operator=(Bureaucrat const & rhs);
		void				change_grade(unsigned char lvl);
	private:

		std::string		 	_name;
		unsigned char		_grade;

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */