#include "Bureaucrat.hpp"


void    test_bur(int n1)
{
    std::cout << "Bureaucrat lvl : " << n1 << std::endl;

    try
	{
        Bureaucrat thierry("Thierry", n1);
        std::cout << "\tSuccess : " << thierry << std::endl;
    }
	catch(const std::exception& e)
	{
		std::cerr << "\tFailure : " << e.what() << '\n';
	}
}

void    test_inc(int n1)
{
    std::cout << "Bureaucrat lvl : " << n1 << std::endl;

    try
	{
        Bureaucrat thierry("Thierry", n1);
        thierry.inc_lvl();
        std::cout << "\tSuccess : lvl = " << thierry.getGrade() << std::endl;
    }
	catch(const std::exception& e)
	{
		std::cerr << "\tFailure : " << e.what() << '\n';
	}
}

void    test_dec(int n1)
{
    std::cout << "Bureaucrat lvl : " << n1 << std::endl;

    try
	{
        Bureaucrat thierry("Thierry", n1);
        thierry.dec_lvl();
        std::cout << "\tSuccess : lvl = " << thierry.getGrade() << std::endl;
    }
	catch(const std::exception& e)
	{
		std::cerr << "\tFailure : " << e.what() << '\n';
	}
}

int main(void)
{
    Bureaucrat jean = Bureaucrat("Jean", 15);

    std::cout << "Testing Bureaucrate Class :" << std::endl;
    test_bur(70);
    test_bur(150);
    test_bur(1);
    test_bur(151);
    test_bur(0);
    test_bur(-1);
    test_bur(-255);

    std::cout << "Testing Incrementation Class :" << std::endl;

    test_inc(70);
    test_inc(150);
    test_inc(1);
    test_inc(151);
    test_inc(0);
    test_inc(-1);
    test_inc(-255);

    std::cout << "Testing Decrementation Class :" << std::endl;

    test_dec(70);
    test_dec(150);
    test_dec(1);
    test_dec(151);
    test_dec(0);
    test_dec(-1);
    test_dec(-255);

    return(0);
}