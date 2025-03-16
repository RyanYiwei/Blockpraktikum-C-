#include <iostream>

class human{
public:
    human(int age): _age(age){};
    void printAge(){
        std::cout<< _age << std::endl;
    }
private:
    int _age;
};

class child: public human {
public:
    using human::human;
};

int main(){
    child c(10);
    c.printAge();
}