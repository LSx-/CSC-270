/**
*
* Person.h (hw2)
*
* Created by: Michael Castillo
* Date: 10/25/17
* Version: 1.0
*/

// Person Class
#include <iostream>
#include <string>

class Person
{
public:
	virtual int id() const = 0;
	virtual std::string name() const = 0;
private:
}

// Professor class
class Professor : public Person
{

public:
	Professor(int publication, string rank);

	int getPublication() const;
	std::string name() const;
	int id() const;
	int getID() const;
	int setID() const;

private:
int publication;
std::string rank();

}

// Student Class
class Student : public Person
{

public:

private:

}
