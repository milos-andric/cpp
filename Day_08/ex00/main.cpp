#include <vector>
#include <set>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(void) {

    int myints[] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    std::vector<int> tristan(myints, myints + (sizeof(myints) / sizeof(int)));
    std::set<int> lola(myints, myints + (sizeof(myints) / sizeof(int)));
    std::list<int> fred(myints, myints + (sizeof(myints) / sizeof(int)));

    try
    {
        std::cout << "res : " << easyFind(tristan, 8) << std::endl;
        std::cout << "res : " << easyFind(fred, 5) << std::endl;
        easyFind(lola, 27);
    }
    catch(char const* e)
    {
        std::cout << "Error :" << e << '\n';
    }
    return(0);
}
