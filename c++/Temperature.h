/**
 * Temperature.h
 *
 * Homework 1 (Temperature)
 * Created by Michael Castillo
 * Date: 10/20/17
 */

class Temperature
{

public:

    int const static CELSIUS;
    int const static FAHRENHEIT;
    int const static KELVIN;

    Temperature(float degrees, int system);
    float getCelsius() const ;
    float getFahrenheit() const ;
    float getKelvin() const ;

private:
    float celsius;

};

int const static CELSIUS = 1;
int const static FAHRENHEIT = 2;
int const static KELVIN = 3;

