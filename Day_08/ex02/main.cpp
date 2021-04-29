#include "mutantstack.hpp"

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(7);
    mstack.push(73);
    mstack.push(37);
    mstack.push(57);
    mstack.push(-15);
    mstack.push(77);
    mstack.push(627);
    mstack.push(10000);

    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ite--;
    *ite = 600;
    ite++;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << *it << std::endl;

    std::stack<int> s(mstack);
    return 0;
}
