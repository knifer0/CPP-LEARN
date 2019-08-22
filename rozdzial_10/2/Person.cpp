#include "Person.h"
#include <iostream>
#include <cstring>
Person::Person() {
	lname = "";
	fname[0] = '\0';
}
Person::Person(const std::string& ln, const char* fn) {
	lname = ln;
	strcpy_s(fname, LIMIT - 1, fn);
}
void Person::Show() const {
	std::cout << lname << " " << fname << std::endl;
}
void Person::FormalShow() const {
	std::cout << fname << " " << lname << std::endl;
}