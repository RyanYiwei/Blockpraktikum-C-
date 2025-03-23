#include <iostream>

namespace ns{
    inline namespace ns1{
        using namespace std;
        int x = 10;
        void print(){
            cout << x<< endl;
        }
    }
    namespace ns2{
        using namespace std;
        int x = 20;
        void print(){
            cout << x << endl;
        }
    }

    namespace ns1{
        void print2(){
            cout << "Hello"<< endl;
        }
    }
}
inline namespace NS{
    void print(){
        using std::cout, std::endl;
        cout << "This is print function from NS." << endl;
    }
}

int main(){
    ns::print();
    ns::print2();
    ns::ns2::print();
    print();
    return 0;
}