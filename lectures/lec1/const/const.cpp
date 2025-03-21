#include <iostream>
using namespace std;

class Int{
private:
    int val;
public:
    Int(int val): val(val){}
    const int adder(int val2) const{
        return val+val2;
    }

};

int main(){
    Int a(10);
    int b = a.adder(15);
    b+=2;
    std::cout << b+2<<std::endl;
}