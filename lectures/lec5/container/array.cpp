#include <iostream>
#include <array>

int main(){
    std::array<int, 10> myArray;
    for(int i=0; i<myArray.size(); i++){
        myArray[i] = i;
    }
    // Iterator
    for(auto it=myArray.begin(); it!= myArray.end(); ++it){
        std::cout<< *it << " ";
    }
    std::cout << "\n" << *myArray.data()<< std::endl;
    std::cout << myArray.at(5) << std::endl;
    return 0;
    
}