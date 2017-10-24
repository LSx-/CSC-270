/**
 * Temperature.cpp
 *
 * Homework 1 (Temperature)
 * Created by Michael Castillo
 * Date: 10/20/17
 *
 *credit: Jennefer Maldonado
 *reason: helping me get things defined
 */

#include <iostream>
#include <strstream>
#include "Temperature.h"

Temperature::Temperature(float degrees, int system)
{
    this->degrees = degrees;
    this->celsius = this->degrees;
    this->system = system;
    
    this->celsius = (celsius - 32) * .5556;
}

float Temperature::getCelsius() const
{
    return celsius;
}

float Temperature::getFahrenheit() const
{
    float tempF = celsius * 9/5 + 32;
    return tempF;
}

float Temperature::getKelvin() const
{
    float tempK = celsius + 273.15;
    return tempK;
}
