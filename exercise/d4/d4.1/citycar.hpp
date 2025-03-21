#ifndef CITYCAR_HPP
#define CITYCAR_HPP
#include <iostream>
#include "car.hpp"

class CityCar: public Car{
public:
    CityCar(const int &max_load_weight);
    void load(const int &load_weight);
    void unload(const int &unload_weight);

private:
    int _max_load_weight;
    int _actual_load_weight = 0;
};

#endif