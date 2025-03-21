#ifndef SPORTSCAR_HPP
#define SPORTSCAR_HPP

#include <iostream>
#include "citycar.hpp"

class SportsCar:public CityCar{
private:
    bool _canopy_state; // true for opened, false for closed
public:
    SportsCar(const int &max_load_weight);
    void open_canopy();
    void close_canopy();
};

#endif