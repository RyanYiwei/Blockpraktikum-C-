#include <iostream>
#include "name.hpp"
#include <string>

void printNameAndAge(int age, std::string name){
    std::cout<< name << " - " << age << "\n";
}

int main(){
    std::cout<< "Yiwei - 21 \n";
    int age;
    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    std::cout << "Input your age: ";
    std::cin >> age;
    printNameAndAge(age, name);
}