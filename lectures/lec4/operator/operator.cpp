#include <iostream>

template <class T>
class A{
public:
    A(T arg):val(arg){
        std::cout << "Constructed" << std::endl;
    };
    T getVal(){
        return val;
    }
    friend std::ostream &operator <<(std::ostream &stream, 
        const A &a){
            return stream << "Value of class A: "<< a.val<<std::endl;
        }

private:
    T val;
};

int main(){
    A<int> a = A(3);
    std::cout << "Hello " << a;
}