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

//the person class ( the skeleton )
class Person
{
public:
    
	//int id() const = 0;
    
    
	Person(string name);
    
    //getting the name from the person parameter
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
    //the professor class that has the parameters
	Professor(string name, int publication, string rank);
    
    //this method will gets the publication from the professor parameter
	int getPublication() const;
    
    //this method will get the rank of the professor parameter
	string getRank() const;

private:
	int publication;
	string rank;

};

// Student Class
class Student : public Person
{

public:
    //the student class with the needed parameters
	Student(string name, string major, string minor);
    
    //this method will get the minor that is in the student parameter
	string getMinor() const;
    
    //this method will get the major that is in the student parameter
	string getMajor() const;

private:
	string minor;
	string major;
};
