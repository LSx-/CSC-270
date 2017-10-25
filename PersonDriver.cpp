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
    
    Professor l(leune, 14, assistant);
    Student m(Michael, computerScience, games);
    Student j(john, Information-Technology, none);
    
    std::cout << "Professor: " << l.getname() << " " << l.getPublication()
    << " " << l.getRank() << " " << l.getid() << std::endl;
    
    std::cout << "student: " >> m.getname() << " " << m.getMajor() <<
    " " << m.getMinor() << " " << m.getid() << std::endl;
    
    return 0;
    
    
}
