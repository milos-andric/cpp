# include <iostream>
# include "whatever.hpp"

class Awesome {

public:

    Awesome( int n ) : _n( n ) {}

    bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }

    int     getNbr(void) const{
        return(this->_n);
    }


private:

    int _n;
};

std::ostream &			operator<<( std::ostream & o, Awesome const & i ){
    o << i.getNbr();
    return(o);
}

int main(void)
{
  std::cout << "Enonce" << '\n';
  int a = 2;
  int b = 3;
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;

  std::cout << '\n'<< "mes tests" << '\n';

  std::cout << "int : " << '\n';
  int i1 = 1;
  int i2 = 6;
  std::cout << "i1 : " << i1 << std::endl;
  std::cout << "i2 : " << i2 << std::endl;
  swap(i1, i2);
  std::cout << "i1 : " << i1 << std::endl;
  std::cout << "i2 : " << i2 << std::endl;
  std::cout << "min(i1,i2) : " << min(i1, i2) << std::endl;
  std::cout << "max(i1,i2) : " << max(i1, i2) << std::endl;


  std::cout << '\n' << "char : " << '\n';
  char c1 = 'a';
  char d1 = 't';
  std::cout << "c1 = " << c1 << ", d1 = " << d1 << std::endl;
  swap(c1, d1);
  std::cout << "c1 = " << c1 << ", d1 = " << d1 << std::endl;
  std::cout << "min(c1,d1) : " << min(c1, d1) << std::endl;
  std::cout << "max(c1,d1) : " << max(c1, d1) << std::endl;

  std::cout << '\n' << "float : " << '\n';
  float c3 = 1.2f;
  float d3 = 1.5f;
  std::cout << "c3 = " << c3 << ", d3 = " << d3 << std::endl;
  swap(c3, d3);
  std::cout << "c3 = " << c3 << ", d3 = " << d3 << std::endl;
  std::cout << "min( c3, d3 ) = " << min(c3, d3) << std::endl;
  std::cout << "max( c3, d3 ) = " << max(c3, d3) << std::endl;

  std::cout << '\n' << "double : " << '\n';
  double c4 = 1.2;
  double d4 = 1.5;
  std::cout << "c4 = " << c4 << ", d4 = " << d4 << std::endl;
  swap(c4, d4);
  std::cout << "c4 = " << c4 << ", d4 = " << d4 << std::endl;
  std::cout << "min( c4, d4 ) = " << min(c4, d4) << std::endl;
  std::cout << "max( c4, d4 ) = " << max(c4, d4) << std::endl;

  std::cout << '\n' << "Awesome : " << '\n';
  Awesome c5(5);
  Awesome d5(666);
  std::cout << "c5 = " << c5 << ", d5 = " << d5 << std::endl;
  swap(c5, d5);
  std::cout << "c5 = " << c5 << ", d5 = " << d5 << std::endl;
  std::cout << "min( c5, d5 ) = " << min(c5, d5) << std::endl;
  std::cout << "max( c5, d5 ) = " << max(c5, d5) << std::endl;
  return (0);
}
