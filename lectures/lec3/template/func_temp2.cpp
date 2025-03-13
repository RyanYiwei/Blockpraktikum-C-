#include <iostream>

template <class T>
T add(T a, T b){
    return a+b;
}

int main(){
    int x1 = 1, y1 = 2;
    double x2 = 1.4, y2 = 3.6;
    std::cout << add(x1, y1) << " " << add(x2, y2);
}