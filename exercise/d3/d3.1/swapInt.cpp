#include <iostream>
 void swapInt(int * p1, int * p2){
    int b = *p1;
    *p1 = *p2;
    *p2 = b;
    return;
 }

 int main(){
    int a = 10;
    int b = 20;
    swapInt(&a , &b);
    std::cout << a << " " << b << std::endl;
 }