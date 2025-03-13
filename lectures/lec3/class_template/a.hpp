#ifndef A_HPP
#define A_HPP

#include <iostream>

template <class T1, class T2>
class A{
private:
    T1 val1;
    T2 val2;
public:
    A(T1 data1, T2 data2);
    void print();
    auto add()->decltype(val1+val2);
};

template <class T1, class T2>
A<T1, T2>::A(T1 data1, T2 data2): 
    val1(data1), val2(data2){}

template <class T1, class T2>
void A<T1, T2>::print(){
    std::cout << "val1: "<< val1 << "\tval2: " << val2<<std::endl;
}

template <class T1, class T2>
auto A<T1,T2>::add()->decltype(val1+val2){
    return val1+val2;
}

#endif