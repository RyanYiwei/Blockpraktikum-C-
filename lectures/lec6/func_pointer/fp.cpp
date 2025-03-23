#include <iostream>
using namespace std;

void print(int a, int b){
    std::cout<< "The first value is "<< a << std::endl;
    std::cout<< "The second value is "<< b << std::endl;
}

void int_func(int a, int b, void (*f)(int, int)){
    (*f)(a, b);
}

int main(){
    int_func(10, 20, print);
    void (*func_ptr)(int, int) = &print;
    (*func_ptr)(30, 40);
    func_ptr(30, 40);
}
