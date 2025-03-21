#include "car.hpp"

// Constructor: Initializes constants with given value
Car::Car(double capacity, double consumption)
  : _capacity(capacity), _consumption(consumption),
    _fillLevel(0.0), _milage(0.0)
{
}


bool Car::refuel(const double amount) {
        if (amount + _fillLevel <= _capacity) {
                _fillLevel += amount;
                return true;
        } else {
                return false;
        }
}

double Car::drive(const double distance) {
        if (distance > reach()) {
                double tmp = reach();
                _milage += reach();
                _fillLevel = 0;
                return tmp;
        } else {
                _milage += distance;
                _fillLevel -= distance*_consumption/100;
                return distance;
        }
}

double Car::fillLevel() const {
        return _fillLevel;
}

double Car::reach() const {
        return _fillLevel*(100/_consumption);
}

double Car::milage() const {
        return _milage;
}

