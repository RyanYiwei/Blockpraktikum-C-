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
    ~Int(){
        std::cout<< "Object destructed." << std::endl;
    }
};

int main(){
    auto p2 = std::make_unique<Int>(2);
    p2.get()->print();
    p2 -> print();

    std::unique_ptr<Int> p3; //declaration
    if(p3.get() == nullptr){
        std::cout << "p3 is a nullptr." << std::endl;
    }
    p3 = std::make_unique<Int>(10);
    p3.get()->print();
}