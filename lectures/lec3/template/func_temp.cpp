#include <iostream>

// declaration
template <typename T1, typename T2>
void printArguments(T1 x1, T2 x2);

// definition
template <typename T1, typename T2>
void printArguments(T1 x1, T2 x2){
    std::cout<< x1 << " " << x2 << std::endl;
}

int main(){
    printArguments(1, 2);
    printArguments("Hello", 1.0);
}