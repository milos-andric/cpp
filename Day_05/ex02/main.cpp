#include "Bureaucrat.hpp"
#include "Form.hpp"

// void    try_test_f(int n1, int n2)
// {
//     try
// 	{
//         std::cout << n1 << ", " << n2 << std::endl;
//         Form thierry("Thierry", n1, n2);
//         std::cout << "\tSuccess" << std::endl;
//     }
// 	catch(const std::exception& e)
// 	{
//         std::cout << "\t" ;
// 		std::cerr << e.what() << "\n\n";
// 	}
// }

// void    try_test_s(int n1, int n2, int n3)
// {
//     Bureaucrat Thierry("Thierry", n1);
//     Form formulaire("Formulaire", n2, n3);
//     Thierry.signForm(formulaire);
//     std::cout << std::endl << "grade : " << n1 << " f-lvl : " << n2 << ", " << n3 << std::endl;
// }
# include "ShrubberyCreationForm.hpp"
int main(void)
{
    Bureaucrat jean = Bureaucrat("Jean", 15);
    Bureaucrat jean2 = Bureaucrat("Jea21n", 150);
    // // Bureaucrat fab = Bureaucrat("Fab", 0);
    ShrubberyCreationForm lol("Form name");
    jean2.executeForm(lol);
    jean.executeForm(lol);
    jean.signForm(lol);
    jean.executeForm(lol);
    jean2.executeForm(lol);
    // //Fucking up high and low grade

    // try_test_f(-1,70);
    // try_test_f(0,70);
    // try_test_f(1,70);
    // try_test_f(150,70);
    // try_test_f(151,70);
    // try_test_f(70,-1);
    // try_test_f(70,0);
    // try_test_f(70,1);
    // try_test_f(70,150);
    // try_test_f(70,151);
    // try_test_f(70,70);
    // try_test_f(666,666);
    // try_test_f(666,-666);
    // try_test_f(-666, 666);
    // try_test_f(-666,-666);

    // //signing every form

    // try_test_s(70, 150, 150);
    // try_test_s(70, 10, 70);
    // try_test_s(70, 70, 70);
    // try_test_s(1, 1, 70);
    // try_test_s(150, 150, 70);
    // try_test_s(149, 150, 70);
    // try_test_s(150, 149, 70);
    // try_test_s(1, 2, 70);
    // try_test_s(2, 1, 70);
    return(0);
}