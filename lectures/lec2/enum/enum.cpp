#include <iostream>

enum class CarColor: int { red = 1, yellow = 2, green = 3};
enum BagColor: int {red = 1, yellow = 2, green = 3};

int main(){
    BagColor c1 = red;
    if(c1==1){ std::cout << "Comparision with integer is allowed by enum."; }
    
}