#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(std::string name);
		PresidentialPardonForm( PresidentialPardonForm const & src );
		virtual ~PresidentialPardonForm() _NOEXCEPT;

		std::string	getTarget(void) const;

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs );

	private:

		PresidentialPardonForm();
		
		void			action(Bureaucrat const & executor) const;

		std::string		_target;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */