/**
 * Temperature.h
 *
 * Homework 1 (Temperature)
 * Created by Michael Castillo
 * Date: 10/20/17
 *
 *credit: Jennefer Maldonado
 *reason: helping me get things defined
 */

class Temperature
{

public:
    
    static const int CELSIUS = 1;
    static const int FAHRENHEIT = 2;
    static const int KELVIN = 3;

    Temperature(float degrees, int system);
    float getCelsius() const ;
    float getFahrenheit() const ;
    float getKelvin() const ;

private:
    float degrees;
    float celsius;
    int system;

};
