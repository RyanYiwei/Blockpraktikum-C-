#ifndef CARS_HPP
#define CARS_HPP

#include <iostream>
class Cars{
public:
    Cars(const std::string ID, const std::string Name, const double fuel_capacity, 
        const double fuel_consumption, const double filling_stand, const double kilo_stand);
    bool refuel(const double filling_fuel);
    void fully_refuel(void);
    double drive(const double kilos);
    double fillLevel(void);
    double reach(void);
    double milage(void);
    void print_stand(void);

private:
    const std::string _id;
    const std::string _name;
    const double _capacity;
    const double _consumption;
    double _fill_level;
    double _milage_level;

};

#endif