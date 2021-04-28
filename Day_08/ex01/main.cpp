#include "Span.hpp"

// void test(void)
// {
//
// }

int main(int argc, char const *argv[]) {

    Span lol(0);
    try
    {
        lol.addNumber(5);
        lol.addNumber(2);
        lol.addNumber(6);
        lol.addNumber(8);
        lol.addNumber(9);
    }
    catch(std::exception const& e)
    {
        std::cout << "lol" << '\n';
    }
    lol.print();
    try {
    std::cout << lol.shortestSpan() << std::endl;
    std::cout << lol.longestSpan() << std::endl;
    }
    catch(std::exception const& e)
    {
        std::cout << "lol" << '\n';
    }
    return 0;
}
