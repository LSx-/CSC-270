/**
 * TempDriver.cpp
 *
 * Homework 1 (Temperature)
 * Created by Michael Castillo
 * Date: 10/20/17
 */

#include "Temperature.h"
#include <iostream>

int main ()
{

float temp = 68.0;

std::cout << "Fahrenheit: " << temp << std::endl;
Temperature t (temp, Temperature::FAHRENHEIT);

std::cout << "in Celsius: " << t.getCelsius() << std::endl;
std::cout << "in Kelvin : " << t.getKelvin() << std::endl;

return 0;

};