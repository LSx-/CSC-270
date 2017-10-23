/**
 * Temperature.cpp
 *
 * Homework 1 (Temperature)
 * Created by Michael Castillo
 * Date: 10/20/17
 */

#include <iostream>
#include <strstream>
#include "Temperature.h"

Temperature::Temperature(float degrees, int system)
{
    this->celsius = degrees;
    //this->
}

float Temperature::getCelsius() const
{
    return CELSIUS;
}

float Temperature::getFahrenheit() const
{
    return FAHRENHEIT;
}

float Temperature::getKelvin() const
{
    celsius = ( + 459.67) * 5/9;
    return KELVIN;
}
