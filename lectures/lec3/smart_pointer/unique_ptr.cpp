#include <iostream>
#include <memory>

class Int{
private:
    int _val;
public:
    Int(int data): _val(data){};
    void print(){
        std::cout << _val << std::endl;
    }
};

int main(){
    auto p = std::make_unique<int>();
    std::cout << *p.get() << std::endl;

    auto p2 = std::make_unique<Int>(2);
    p2.get()->print();
}