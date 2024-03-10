#pragma once

#include "Car.h"
#include "Vehicle.h"

#include <iostream>

class FlyingCar : public Car
{
public:
    FlyingCar(const Driver& driver, unsigned int speed)
        : Car { driver, speed }
        , _flying_speed { speed * 10u }
    {}

    unsigned int drive() const override
    {
        if (_driver.has_air_licence())
        {
            std::cout << "Sweeesh!" << std::endl;
            return _flying_speed;
        }
        else
        {
            return Car::drive();
        }
    }

private:
    unsigned int _flying_speed = 0;
};