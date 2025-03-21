#include <iostream>

template <class T>
void get_inverse(const T &val){
    if(val==0){
        
    }
    double val_double = static_cast<double> (val);
    std::cout << val <<std::endl;
    std::cout << "Inverse. " << 1/val_double << std::endl;
}

int main(){
    get_inverse(0);
}