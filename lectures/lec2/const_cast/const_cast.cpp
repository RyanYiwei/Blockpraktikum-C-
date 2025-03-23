#include <iostream>

int main(){
    const double pi = 3.14;
    double & anotherDouble = const_cast<double &> (pi);
    anotherDouble = 4.0;
    std::cout << pi << std::endl;
    std::cout << anotherDouble << std::endl;
    std::cout << &pi << " " << &anotherDouble << std::endl;
}