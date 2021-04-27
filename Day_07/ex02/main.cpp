#include <iostream>
#include "Array.hpp"

// class Awesome {
//
// public:
//
//     Awesome( int n ) : _n( n ) {}
//     Awesome() : _n(0){}
//
//     bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
//     bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
//     bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
//     bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
//     bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
//     bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
//
//     int     getNbr(void) const{
//         return(this->_n);
//     }
//
//
// private:
//
//     int _n;
// };
//
// std::ostream &			operator<<( std::ostream & o, Awesome const & i ){
//     o << i.getNbr();
//     return(o);
// }
//
// void test_int(int nbr) {
//
//     std::cout << "testing INTS : " << std::endl;
//
//     Array<int>   koko(nbr);
//
//     try
//     {
//         for (int i = 0; (i < nbr) + 1 ; i++){
//             koko[i] = i;
//         }
//     }
//     catch(std::exception& e)
//     {
//         std::cout << "exception caught" << std::endl;
//     }
//
//     for (int i = 0; (i < nbr) ; i++){
//         std::cout << i << " : " << koko[i] << std::endl;
//     }
// }
//
// void test_char(int nbr) {
//
//     std::cout << "testing CHARS : " << std::endl;
//
//     Array<char>   koko(nbr);
//
//     try
//     {
//         for (int i = 0; (i < nbr) + 1 ; i++){
//             koko[i] = i + 48;
//         }
//     }
//     catch(std::exception& e)
//     {
//         std::cout << "exception caught" << std::endl;
//     }
//
//     for (int i = 0; (i < nbr) ; i++){
//         std::cout << i << " : " << koko[i] << std::endl;
//     }
// }
//
// void test_float(int nbr) {
//
//     std::cout << "testing FLOATS : " << std::endl;
//
//     Array<float>   koko(nbr);
//
//     try
//     {
//         for (int i = 0; (i < nbr) + 1 ; i++){
//             koko[i] = i + 0.5;
//         }
//     }
//     catch(std::exception& e)
//     {
//         std::cout << "exception caught" << std::endl;
//     }
//
//     for (int i = 0; (i < nbr) ; i++){
//         std::cout << i << " : " << koko[i] << std::endl;
//     }
// }
//
// void test_class(int nbr) {
//
//     std::cout << "testing CLASSES : " << std::endl;
//
//     Array<Awesome>   koko(nbr);
//
//     try
//     {
//         for (int i = 0; (i < nbr) + 1 ; i++){
//             koko[i] = i + 0.5;
//         }
//     }
//     catch(std::exception& e)
//     {
//         std::cout << "exception caught" << std::endl;
//     }
//
//     for (int i = 0; (i < nbr) ; i++){
//         std::cout << i << " : " << koko[i] << std::endl;
//     }
// }
//
// int main(void)
// {
//     test_int(3);
//
//     test_int(0);
//
//     test_char(3);
//
//     test_float(3);
//
//     test_class(2);
//     return(0);
// }

void aff(Array< int > a)
{
  std::cout << "Affichage : " << '\n';
  unsigned int  si = a.size();
  std::cout << "size : " << si << std::endl;
  for (unsigned int i = 0; i < a.size(); i++)
  {
    std::cout << i << " : " << a[i] << std::endl;
  }
  std::cout << "fin de Affichage"
            << "\n\n";
}

int main(void)
{
  Array< int > *array0 = new Array< int >();
  Array< int > array0B = Array< int >();
  try
  {
    std::cout << "array0->size() : " << array0->size() << std::endl;
    std::cout << (*array0)[0] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << '\n';
  }
  std::cout << "Affichage de array0" << '\n';
  aff(*array0);
  delete array0;
  unsigned int  LEN = 10;
  Array< int > *arrayint = new Array< int >(LEN);
  Array< int > arrayintB = Array< int >(LEN);
  std::cout << "arrayint->size() : " << arrayint->size() << std::endl;
  std::cout << "Affichage de arrayint" << '\n';
  aff(*arrayint);
  std::cout << "Affichage de arrayintB" << '\n';
  aff(arrayintB);
  for (unsigned int i = 0; i < LEN; i++)
  {
    (*arrayint)[i] = (int) i;
  }
  std::cout << "Affichage de arrayint" << '\n';
  aff(*arrayint);

  Array< int > *arrayint2 = new Array< int >(*arrayint);
  delete arrayint;
  std::cout << "Affichage de arrayint2 copy de arrayint modifier" << '\n';
  (*arrayint2)[0] = 99;
  aff(*arrayint2);
  Array< int > *arrayint3 = new Array< int >();
  *arrayint3 = *arrayint2;
  delete arrayint2;
  (*arrayint3)[1] = 77;
  std::cout << "Affichage de arrayint3 copy de arrayint2 modifier" << '\n';
  aff(*arrayint3);
  // std::cout << "i : " << i << " : " << arrayint3->get(i) << std::endl;
  delete arrayint3;
  return (0);
}
