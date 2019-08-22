#pragma once
#include <iostream>
#ifndef PERSON_H_
#define PERSON_H_

class Person{
private:
	static const int LIMIT = 256;
	std::string lname; // nazwisko
	char fname[LIMIT]; // imie
public:
	Person();
	Person(const std::string& ln, const char* fn = "HejTy");
	void Show() const; // imie nazwisko
	void FormalShow() const; // nazwisko imie
};

#endif PERSON_H_
