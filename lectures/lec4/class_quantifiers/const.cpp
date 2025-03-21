#include <iostream>

template <class T>
class adder{
private:
    const T _addend;
public:
    adder(T addend): _addend(addend), _addend_n(addend){};
    void a(T &val) const{
        val+=_addend;
    }
    void b(T &val){
        a(val);
    }
    void c(T &val) const{
        a(val); // allowed
        b(val); // not allowed
    }
};

int main(){
    adder<int> adder5(5);
    int x = 10;
    adder5.a(x);
    adder5.b(x);
    std::cout<< x;
}
