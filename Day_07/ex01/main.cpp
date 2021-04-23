#include <iostream>

template< typename T>
void swap(T & a, T & b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template< typename T>
T   min(T & a, T & b)
{
    return(a < b ? a : b);
}

template< typename T>
T   max(T & a, T & b)
{
    return(a > b ? a : b);
}

int main(void)
{
    //Swap
    int x = 2, y = 5;

    swap<int>(x, y);
    std::cout << "x : " << x << std::endl << "y : " << y << std::endl;
    //Min


    //Max
}
