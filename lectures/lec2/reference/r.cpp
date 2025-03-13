#include <iostream>

int main(){
    int b = 10;
    int &a = b ;
    bool if_same_address = ( &a == &b);
    std::cout << if_same_address;
}