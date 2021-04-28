# pragma once

template < typename T>
int   easyFind(T cont, int nbr)
{
    typename T::iterator it;

    it = find(cont.begin(), cont.end(), nbr);
    if (it == cont.end())
        throw "number not found";
    return(*it);
};
