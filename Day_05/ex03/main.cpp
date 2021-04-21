#include "Bureaucrat.hpp"
#include "Form.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Bureaucrat jean = Bureaucrat("Jean", 3);
    Bureaucrat jean2 = Bureaucrat("Jea21n", 150);

    Intern  kieran;

    Form*   shru;
    shru = kieran.makeForm("shrubbery request", "fantasio");

    Form*   robo;
    robo = kieran.makeForm("robotomy request", "fantasio");

    Form*   pres;
    pres = kieran.makeForm("pardon request", "fantasio");

    jean2.executeForm(*shru);
    jean.executeForm(*shru);
    jean.signForm(*shru);
    jean.executeForm(*shru);
    jean2.executeForm(*shru);

    std::cout << "\nrobotomy check :\n";

    jean2.executeForm(*robo);
    jean.executeForm(*robo);
    jean.signForm(*robo);
    jean.executeForm(*robo);
    jean.executeForm(*robo);
    jean2.executeForm(*robo);

    std::cout << "\nPresident check :\n";

    jean2.executeForm(*pres);
    jean.executeForm(*pres);
    jean.signForm(*pres);
    jean.executeForm(*pres);
    jean.executeForm(*pres);
    jean2.executeForm(*pres);

    return(0);
}