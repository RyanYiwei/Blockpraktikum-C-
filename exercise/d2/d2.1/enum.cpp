#include <iostream>
using namespace std;

enum class ShirtColor: int {
    RED = 0, BLACK = 1, WHITE = 2
};

int main(void){
    ShirtColor shirtColor = ShirtColor::RED;
    switch(shirtColor) {
        case ShirtColor::RED: 
            cout<<"Red shirt."<<endl;
            break;
        case ShirtColor::BLACK: 
            cout<<"Black shirt."<< endl;
            break;
    }
}