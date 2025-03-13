#include <iostream>
#include "cars.hpp"

int main(){
    Cars car("10202","BMW", 50, 5, 20, 0);
    
    car.print_stand();

    car.drive(10);
    car.print_stand();

    car.fully_refuel();
    car.print_stand();

    car.drive(car.reach());
    car.print_stand();

    car.fully_refuel();
    car.print_stand();

    car.refuel(10);
    car.print_stand();

}