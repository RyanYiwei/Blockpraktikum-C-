#include <iostream>

class A{
public:
    virtual void print(){
        std::cout << "Hi! Here is class A." <<std::endl;
    }
    void show(){
        std::cout << "I am A."<< std::endl;
    }
};

class B: public A{
public:
    void print() override{
        std::cout << "Hi! Here is class B." << std::endl;
    }
    void show(){
        std::cout << "I am B."<< std::endl;
    }
};

int main(){
    A* ptr_A = new B();
    ptr_A->print();
    ptr_A->show();
    B* ptr_B = dynamic_cast<B*>(ptr_A);
    ptr_B->print();
    ptr_B->show();
}
