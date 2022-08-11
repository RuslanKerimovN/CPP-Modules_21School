#include "iter.h"

template <typename T>
void print(T const &a) {
    std::cout << a << std::endl;
}

// class Awesome
// {
//     public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//     private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) {
//      o << rhs.get(); return o; 
// }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }
// int main() 
// {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];
//     iter( tab, 5, print );
//     iter( tab2, 5, print );
//     return 0;
// }

int main() { 
    int mass[] = {1,2,3,4,5,6,7,8,9,10};
    iter(mass, 10, print);

    float mass1[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.1};
    iter(mass1, 10, print);
    return 0;
}