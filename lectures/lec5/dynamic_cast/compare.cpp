#include <iostream>

class Animal{
public:
    virtual void print(){
        std::cout << "Animal." << std::endl;
    }
};

class Dog: public Animal{
public:
    void print() override{
        std::cout << "Dog." << std::endl;
    }
    void bark(){
        std::cout << "Woof." << std::endl;
    }
};

class Cat: public Animal{
public:
    void print() override{
        std::cout << "Cat." << std::endl;
    }
    void meow(){
        std::cout << "Meow." << std::endl;
    }
};

int main(){
    Animal * a = new Cat();
    Dog * dog1 = static_cast<Dog*> (a);
    dog1 ->print();
    dog1 ->bark();
    Dog* dog2 = dynamic_cast<Dog*>(a);
    if (dog2) {
        dog2->bark(); // 不会执行
    } else {
        std::cout << "dynamic_cast failed: not a Dog." << std::endl;
    }
}