#include <iostream>
#include "citycar.hpp"

CityCar::CityCar(const int &max_load_weight): _max_load_weight(max_load_weight){};
void CityCar::load(const int &load_weight){
    _actual_load_weight += load_weight;
}
void CityCar::unload(const int &unload_weight){
    _actual_load_weight -= unload_weight;
}

