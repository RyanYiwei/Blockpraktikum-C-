#include <iostream>

int main(){
    const uint64_t i = 0, v = 42;
    const uint64_t &ri = i, &rv = v;

    std::cout << &i << " " << &v << std::endl;
    const_cast<uint64_t&>(i) = v;
    std::cout << i << " " << v << std::endl;
    std::cout << &i << " " << &v << std::endl;
    std::cout << ri << " " << rv << std::endl;
    std::cout << &ri << " " << &rv << std::endl;

}