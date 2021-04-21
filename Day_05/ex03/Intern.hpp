#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{

	public:

		Intern();
		Intern( Intern const & src );
		virtual ~Intern();

		Form *	makeForm(std::string type, std::string name);

		Intern &		operator=( Intern const & rhs );

	private:
};

#endif /* ********************************************************** INTERN_H */