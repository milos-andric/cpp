#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat jean = Bureaucrat("Jean", 15);
    // Bureaucrat fab = Bureaucrat("Fab", 0);

    try
	{
        Bureaucrat thierry("Thierry", 1);
        thierry.inc_lvl();
    }
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return(0);
}