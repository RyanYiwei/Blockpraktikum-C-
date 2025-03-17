#include <iostream>
#include <memory>

class Int{
private:
    int* _ptr;
public:
    Int(int val): _ptr(new int(val)){
        std::cout << "Object constructed."<< std::endl;
    }
    Int(Int &other){
        std::cout << "Copy Constructor called!"<< std::endl;
        _ptr = new int(*other._ptr);
    }
    void print(){
        std::cout << "The value "<< *_ptr << " at "<< _ptr << std::endl;
    }
};

int main(){
    Int a1=Int(10);
    a1.print();

    Int a2 = a1;
    a2.print();
}