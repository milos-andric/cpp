
#pragma once

# define T_N "\033[00m"
# define T_Y "\033[00;33m"
# define T_GN "\033[00;32m"
# define T_GYB "\033[01;90m"
# define T_GYI "\033[03;90m"
# define T_BB "\033[01;34m"
# define T_BHID "\033[2;34m"
# define T_GYHID "\033[2;90m"

template< typename T>
void   print(T a)
{
    std::cout << a << ", ";
}

template< typename T>
void    iter(T const *s1, int length, void (*f)(T const &))
{
    for(int i = 0; i < length; i++)
    {
            f(s1[i]);
    }
}
