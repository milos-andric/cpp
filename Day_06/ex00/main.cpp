# define ERR_ARG "please launch program with one number only, either a char, an integer or a decimal number (with or without an f after it).\nexamples :\n\t\t- 'c'\n\t\t- '42'\n\t\t- '56.5'\n\t\t- '59.7f'\n"

# include <iostream>
# include <iomanip>
# include <string>
# include <math.h>
# include <float.h>
# include <cstdlib>

class NonPrintableException : public std::exception{
    const char * what () const throw ()
    {
        return "Non displayable character";
    }
};
void    display_char(double num)
{
    char car = static_cast<char>(num);

    std::cout << "char =\t\t" ;

    if (isnan(num) || isinf(num))
        std::cout << "impossible" << std::endl;
    else if (!isprint(car))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << car << std::endl;
}

void    display_int(double num)
{
    int car = static_cast<int>(num);

    std::cout << "int =\t\t" ;

    if (isnan(num) || isinf(num))
        std::cout << "impossible" << std::endl;
    else
        std::cout << car << std::endl;
}

void    display_float(double num)
{
    float car = static_cast<float>(num);

    std::cout << "float =\t\t" ;

    std::cout << std::setprecision(7);
    if ((car - static_cast<int>(car)) == 0)
        std::cout << car << ".0f" << std::endl;
    else
        std::cout << car << "f" << std::endl;
}

void    display_double(double num)
{
    std::cout << "double =\t" ;

    std::cout << std::setprecision(15);
    if ((num - static_cast<int>(num)) == 0)
        std::cout << num << ".0" << std::endl;
    else
        std::cout << num << std::endl;
}

int     check_print_str(std::string s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if (!(isprint(s[i])))
            return(0);
    }
    return(1);
}

void    displayer(std::string s)
{
    double num = 0;

    if ((s.size() == 1) && (isprint(s[0]) && (!(isdigit(s[0])))))
        num = s[0];
    else if (!(check_print_str(s)))
    {
        throw NonPrintableException();
        return;
    }
    else
        num = atof(s.c_str());
    display_char(num);
    display_int(num);
    display_float(num);
    display_double(num);
}

void    converter(std::string s)
{
    try
    {
        displayer(s);
    }
    catch(const NonPrintableException& e)
    {
        std::cout << "give printable characters at least..." << std::endl;
    }
    catch(const std::exception& e)
    {
        converter("nan");
    }

}


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << ERR_ARG << std::endl;
        return(-1);
    }
    else
    {
        std::string s = argv[1];
        converter(s);
    }

    return (0);
}

// void    test_conv(std::string s)
// {
//     std::cout << s << std::endl << std::endl;
//
//     converter(s);
//     std::cout << std::endl;
// }
//
// int main(void)
// {
//     test_conv("0");
//     test_conv("42");
//     test_conv("42.0");
//     test_conv("42.0f");
//     test_conv("42.042");
//     test_conv("-42");
//     test_conv("-42.042");
//     test_conv("a");
//     test_conv("A");
//     test_conv("\n");
//     test_conv("nan");
//     test_conv("inf");
//     test_conv("+inf");
//     test_conv("-inf");
//     test_conv("9999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999");
//     test_conv("askdjhvasd");
//     test_conv("2030asdf305");
//     test_conv("----25fsdf5");
//
//
//     return(0);
// }
