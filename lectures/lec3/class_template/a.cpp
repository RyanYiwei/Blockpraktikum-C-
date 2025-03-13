#include <iostream>
#include "a.hpp"
using namespace std;

int main(){
    A<int, double> a(1, 2.4);
    a.print();
    std::cout << a.add() << std::endl;
    return 1;
}