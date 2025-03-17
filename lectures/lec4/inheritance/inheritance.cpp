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
    child(int age):human(age){};
    child(int age, std::string parent):human(age), _parent(parent){};
    void print_parent(){
        std::cout << _parent << std::endl;
    }
private:
    std::string _parent;
};

int main(){
    child c=child(10);
    c.printAge();
    c.print_parent();
    child c2 = child(10, "David");
    c2.printAge();
    c2.print_parent();
}