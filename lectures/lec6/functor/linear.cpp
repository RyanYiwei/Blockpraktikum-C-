#include <iostream>

class Linear{
private:
    double slope;
    double y0;
public:
    Linear(double sl_ = 1, double y_ = 0)
        : slope(sl_), y0(y_) {}
    double operator()(double x){
        return slope*x + y0;
    } 
};

int main(){
    Linear l1(2.0, 5.0);
    double x = 2.0;
    double y = l1(x);
}