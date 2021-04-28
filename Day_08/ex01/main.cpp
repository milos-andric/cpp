#include "span.hpp"


int main(void) {

    Span test(5);
    try
    {
        test.addNumber(5);
        test.addNumber(2);
        test.addNumber(6);
        test.addNumber(8);
        test.addNumber(9);
    }
    catch(std::exception const& e)
    {
        std::cout << "test" << '\n';
    }
    test.print();
    try {
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;
    }
    catch(std::exception const& e)
    {
        std::cout << "test" << '\n';
    }
    return 0;
}
