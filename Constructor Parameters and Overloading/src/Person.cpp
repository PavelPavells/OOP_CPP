/*
 * Person.cpp
 *
 *  Created on: 12 Jul 2014
 *      Author: johnwpurcell
 */

//#include <sstream>
//#include "Person.h"
#include <sstream>
#include "Person.h"

Person::Person() {
	name = "undefined";
	age = 0;
}
Person::Person(string newName, int newAge) {
	name = newName;
	age = newAge;
}
string Person::toString() {
	stringstream ss;
	ss << "Person: ";
	ss << name;
	ss << "; Age: ";
	ss << age;
	return ss.str();
}