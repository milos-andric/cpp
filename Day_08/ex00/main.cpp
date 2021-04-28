#include <vector>
#include <set>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(int argc, char const *argv[]) {
    // std::vector<int> lol;
    // std::vector<int>::iterator it;
    //
    //
    // lol.push_back(556);
    // lol.push_back(50);
    // lol.push_back(51);
    // lol.push_back(51);
    // lol.push_back(2);
    // lol.push_back(3);
    // lol.push_back(5);
    //
    // it = lol.begin();
    // std::vector<int>::iterator it2 = lol.end();
    // std::cout << "it : " << *it << std::endl;
    // std::cout << "lol.size() : " << lol.size() << std::endl;
    // // for(; it != it2; it++){}
    // //     std::cout << "lol[i] : " << *it << std::endl;
    // // }
    // std::cout << "lol : " << easyfind(lol, 2) << std::endl;

    // return 0;

    int myints[] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    std::vector<int> tristan(myints, myints + (sizeof(myints) / sizeof(int)));
    std::set<int> lola(myints, myints + (sizeof(myints) / sizeof(int)));
    std::list<int> fred(myints, myints + (sizeof(myints) / sizeof(int)));

    try{
        std::cout << "res : " << easyfind(tristan, 8) << std::endl;
        std::cout << "res : " << easyfind(fred, 5) << std::endl;
        easyfind(lola, 27);
    }
    catch(char const* e)
    {
        std::cout << "Error :" << e << '\n';
    }
    return(0);
}
