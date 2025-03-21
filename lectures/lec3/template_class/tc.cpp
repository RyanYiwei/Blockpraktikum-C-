#include <iostream>

class Print{
public:
    template<class T>
    void p(const T &val){
        std::cout<< val << std::endl;
    }
};

int main(){
    Print print;
    print.p("Hello");
    print.p(1);
}