#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    Bureaucrat jean = Bureaucrat("Jean", 3);
    Bureaucrat jean2 = Bureaucrat("Jean2", 150);

    ShrubberyCreationForm shru("Frankie");
    RobotomyRequestForm robo("Fred");
    PresidentialPardonForm pres("Francis");

    jean2.executeForm(shru);
    jean.executeForm(shru);
    jean.signForm(shru);
    jean.executeForm(shru);
    jean2.executeForm(shru);

    std::cout << "\nrobotomy check :\n";

    jean2.executeForm(robo);
    jean.executeForm(robo);
    jean.signForm(robo);
    jean.executeForm(robo);
    jean.executeForm(robo);
    jean2.executeForm(robo);

    std::cout << "\nPresident check :\n";

    jean2.executeForm(pres);
    jean.executeForm(pres);
    jean.signForm(pres);
    jean.executeForm(pres);
    jean.executeForm(pres);
    jean2.executeForm(pres);

    return(0);
}