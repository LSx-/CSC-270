/**
* pDriver.cpp
*
* here we will have all the stuff to make it compile
*
* Created by: Michael Castillo
* Version: 1.0
* Date: 10/24/17
*/

#include <iostream>
#include <strstream>
#include "Person.h"

int main()
{
    int id = 4;
    
    Professor l("leune", 14, "assistant");
    Student m("Michael", "computerScience", "games");
    Student j("john", "Information-Technology", "none");
    
    std::cout << l.getRank() << l.getname() << " has " << l.getPublication()
    << " publications " << std::endl;
    
    std::cout <<m.getMajor() << m.getname() << m.getMinor() << std::endl;
    
    return 0;
    
    
}
