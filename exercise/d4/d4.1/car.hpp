#ifndef CAR_HPP
#define CAR_HPP

/**
 * @brief Defines Car
 *
 * Implements methods to get fillLevel, reach and milage, as well as to drive and refuel the car
 **/
class Car {
public:
        /**
         * @purpose Instantiates Car
         *
         * @param[in] capacity capacity of tank.
         * @param[in] consumption of car in liter per 100km. 
         **/
        Car(const double capacity, const double consumption);

        /**
         * @purpose fuels amount liter gasoline
         *
         * @param[in] amount Amount of gasoline in liters
         **/
        bool refuel(const double amount);
        /**
         * @purpose Drives distance
         *
         * @param[in] distance Distance in km
         **/
        double drive(const double distance);

        /**
         * @purpose gets filllevel of tank
         *
         * @return Filllevel in liter
         **/
        double fillLevel() const;
        /**
         * @purpose gets reach considering current filllevel and consumption
         *
         * @return reach in km
         **/
        double reach() const;
        /**
         * @purpose gets current milage
         *
         * @return milage in km
         **/
        double milage() const;

private:
        const double _capacity;
        const double _consumption;
        double _fillLevel;
        double _milage;
};

#endif //CAR_HPP
