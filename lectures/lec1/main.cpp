#include <iostream>
#include "add.hpp"

int add(int a, int b, int c){
    return a+b+c;
}

int main(){
    int a = add(2, 3, 4);
    std::cout << a << std::endl;
    return 1;
}