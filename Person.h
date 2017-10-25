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
using namespace std;

class Person
{
public:
	//int id() const = 0;
	Person(string name);
	string getname() const;
	int getid() const;
private:
	int id;
	string name;
};

// Professor class
class Professor : public Person
{

public:
	Professor(string name, int publication, string rank);
	int getPublication() const;
	string getRank() const;

private:
	int publication;
	string rank;

};

// Student Class
class Student : public Person
{

public:
	Student(string name, string minor, string major);
	string getminor() const;
	string getmajor() const;

private:
	string minor;
	string major;
};
