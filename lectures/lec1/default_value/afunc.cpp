#include <iostream>
int add(int a, int b = 10, int c = 5){
    std::cout << a << " " << b << " " << c << std::endl;
    return a + b + c;
}

int add(int a, int b){
    using std::cout;
    cout << a+b << std::endl;
}

int main(){
    std::cout << add(1,2, 5);
}