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

//the person class definitions
Person::Person(string name)
{
	this->name = name;
}

//we get the name here, we do not have to call it anywhere else
string Person::getname() const
{
    return name;
}

//the Professor class definitions with a Person super class
Professor::Professor(string name, int publication, string rank) :
Person::Person(name)
{
	this->publication = publication;
	this->rank = rank;
}

//we get the publication here
int Professor::getPublication() const
{
    return publication;
}

//we get the rank here
string Professor::getRank() const
{
    strstream out;
    
    out << rank << " professor " ;
    
    return out.str();
}

//the Student class defintions with a Person super class connected to it
Student::Student(string name, string major, string minor):
Person::Person(name)
{
    this->minor = minor;
    this->major = major;
}

//here we get the minor from the student class
string Student::getMinor() const
{
    strstream out;
    
    out << " Minor is " << minor;
    
    return out.str();
}

//here we get the major from the student class
string Student::getMajor() const
{
    strstream out;
    
    out << major << " major ";
    
    return out.str();
}
