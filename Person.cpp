/**
* Person.cpp
*
* Create by: Michael Castillo
* Version: 1.0
* Date: 10/24/17
*/
#include <iostream>
#include <strstream>
#include "Person.h"
using namespace std;

Person::Person(string name)
{
	this->name = name;
}


int Person::getid() const
{
    return id;
}


string Person::getname() const
{
    return name;
}


Professor::Professor(string name, int publication, string rank) :
Person::Person(name)
{
	this->publication = publication;
	this->rank = rank;
}


int Professor::getPublication() const
{
    return publication;
}


string Professor::getRank() const
{
    return rank;
}


Student::Student(string name, string major, string minor):
Person::Person(name)
{
    this->minor = minor;
    this->major = major;
}


string Student::getMinor() const
{
    return minor;
}


string Student::getMajor() const
{
    return major;
}
