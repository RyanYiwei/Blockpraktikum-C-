#include <iostream>

class Base{
public:
    virtual void show_virtual(){
        std::cout<< "Base class. Virtual." << std::endl;
    }
    void show_normal(){
        std::cout<< "Base class. Normal." << std::endl;
    }
};

class Derived: public Base{
public:
    void show_virtual() override{
        std::cout << "Derived class. Virtual." << std::endl;
    }
    void show_normal(){
        std::cout<< "Derived class. Normal." << std::endl;
    }
    void show_special(){
        std::cout<< "Derived class. Special." << std::endl;
    }
};

int main(){
    Base * d_b = new Derived();
    d_b ->show_normal();
    d_b ->show_virtual();
    Derived * d_d = static_cast< Derived*> (d_b); // Safe downcast.
    d_d ->show_normal();
    d_d ->show_virtual();

    Derived * d_d2 = new Derived();
    Base * d_b2 = static_cast<Base *> (d_d2);
    d_b2 ->show_normal();
    d_b2 ->show_virtual(); // Upcast is allowed.

    Base * b_b = new Base();
    Derived * b_d = static_cast < Derived *> (b_b);
    b_d ->show_normal();
    b_d ->show_virtual();
    b_d ->show_special();



}