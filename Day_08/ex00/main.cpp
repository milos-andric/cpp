#include <vector>
#include <iostream>
#include "easyfind.hpp"

int main(int argc, char const *argv[]) {
    std::vector<int> lol;
    std::vector<int>::iterator it;


    lol.push_back(556);
    lol.push_back(50);
    lol.push_back(51);
    lol.push_back(51);
    lol.push_back(2);
    lol.push_back(3);
    lol.push_back(5);

    it = lol.begin();
    std::vector<int>::iterator it2 = lol.end();
    std::cout << "it : " << *it << std::endl;
    std::cout << "lol.size() : " << lol.size() << std::endl;
    for(; it != it2; it++){}
        std::cout << "lol[i] : " << *it << std::endl;
    }
    std::cout << "lol : " << easyfind(lol, 2) << std::endl;
    return 0;
}
