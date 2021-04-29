#include "span.hpp"
#include <iostream>
#include <vector>

int main(void) {

    std::cout << "basic test :\n" << '\n';
    Span test(5);

    test.addNumber(1);
    test.addNumber(2);
    test.addNumber(3);
    test.addNumber(4);
    test.addNumber(5);

    test.print();

    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;

    std::cout << test.getSize() << std::endl;

    std::cout << "fancy test :\n" << '\n';

    Span test2(5);

    test2.addNumber(0);
    test2.addNumber(-5);
    test2.addNumber(-100);
    test2.addNumber(100);
    test2.addNumber(-2);

    test2.print();

    std::cout << test2.shortestSpan() << std::endl;
    std::cout << test2.longestSpan() << std::endl;

    std::cout << test.getSize() << std::endl;


    std::cout << "Long tabs tests\n" << '\n';

    Span sp_very_long = Span(50000);
    std::vector<int> range(50000, 10);
    range[666] = 666;
    sp_very_long.addNumber(range.begin(), range.end());

    std::cout << sp_very_long.shortestSpan() << std::endl;
    std::cout << sp_very_long.longestSpan() << std::endl;

    std::cout << "Errors :\n" << '\n';

    Span sp_full = Span(1);

    sp_full.addNumber(5);

    try
    {
        sp_full.addNumber(9);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        sp_full.shortestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }

    try
    {
        sp_full.longestSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << "Error : " << e.what() <<  std::endl;
    }


    std::cout << "Edge Cases :\n" << '\n';

    Span sp_short_hard = Span(2);
    sp_short_hard.addNumber(2147483647);
    sp_short_hard.addNumber(-2147483648);

    std::cout << sp_short_hard.shortestSpan() << std::endl;
    std::cout << sp_short_hard.longestSpan() << std::endl;

    Span sp_span_reverse = Span(2);
    sp_span_reverse.addNumber(-2147483648);
    sp_span_reverse.addNumber(2147483647);

    std::cout << sp_span_reverse.shortestSpan() << std::endl;
    std::cout << sp_span_reverse.longestSpan() << std::endl;

    return 0;
}
