#include <iostream>
using namespace std;

int main(){
    int x = 10;
    cout<< &x << endl;
    cout<< sizeof(x) << endl;
    double y = static_cast<double>(x);
    cout << y << " at " << &y << endl;
    cout << sizeof(y) << endl;
}