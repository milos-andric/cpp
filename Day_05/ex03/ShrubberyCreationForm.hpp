#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:

		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		virtual ~ShrubberyCreationForm() _NOEXCEPT;

		std::string	getTarget(void) const;

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );

	private:

		ShrubberyCreationForm();

		void	action(Bureaucrat const & executor) const;

		std::string		_target;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */