#include <iostream>
#include "cars.hpp"

Cars::Cars(const std::string ID, const std::string Name, const double fuel_capacity, 
    const double fuel_consumption, const double filling_stand, const double kilo_stand)
        : _fill_level(filling_stand), _milage_level(kilo_stand), 
        _id(ID), _name(Name), _capacity(fuel_capacity), _consumption(fuel_consumption){
    };

bool Cars::refuel(const double filling_fuel){
    if(filling_fuel >_capacity - _fill_level){
        std::cout << "Not enough space."<< std::endl;
        return false;
    }else{
        std::cout << "Refueled." << std::endl;
        _fill_level += filling_fuel;
        return true;
    }
}

void Cars::fully_refuel(void){
    std::cout<< "Fully Refueled."<< std::endl;
    _fill_level = _capacity;
}

double Cars::drive(const double kilos){
    double rest = 100*(_fill_level / _consumption);
    if(kilos > rest){
        _milage_level += rest;
        _fill_level = 0;
        std::cout << "Drive: "<< rest<< std::endl;
        return rest;
    }else{
        double used_fuel = (kilos/100)* _consumption;
        _fill_level -= used_fuel;
        _milage_level += kilos;
        std::cout << "Drive: "<< kilos << std::endl;
        return kilos;
    }
}

double Cars::fillLevel(void){
    std::cout<< "Fill level: "<<_fill_level << std::endl;
    return _fill_level;
}

double Cars::reach(void){
    double rest = 100*(_fill_level / _consumption);
    std::cout << "Rest " << rest << "km." << std::endl;
    return rest;
}
double Cars::milage(void){
    std::cout<< "Milage level: "<< _milage_level << std::endl;
    return _milage_level;
}

void Cars::print_stand(void){
    fillLevel();
    milage();
    reach();
    std::cout<<std::endl;
}
