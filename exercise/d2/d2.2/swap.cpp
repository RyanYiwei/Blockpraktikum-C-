#include <iostream>

namespace myFunc{
    void swapInt(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(void){
    int x = 23, y = 42;
    myFunc::swapInt(x, y);
    std::cout << x << " " << y << std::endl;
    return 1;
}