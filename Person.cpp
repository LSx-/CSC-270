/**
* Person.cpp
*
* Create by: Michael Castillo
* Version: 1.0
* Date: 10/24/17
*/
#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(string name) {
	this->name = name;
}


Professor::Professor(string name, int publication, string rank) :
	Person::Person(name) {
	this->publication = publication;
	this->rank = rank;
}
