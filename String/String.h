#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using std::ostream;
using std::istream;
class String{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	int length()const {
		return len - 1;
	}
	String(const String& st);; // konstruktor kopiujacy
	String(); // konstruktor domyslny;
	String(const char* napis); 
	~String(); // dekonstruktor 
	friend ostream& operator<<(ostream& op, const String& st);
	friend istream& operator>>(istream& is, String& st);
	friend int STRCMP(const String& s1, const String& s2);
	friend bool operator<(const String& s1, const String& s2);
	friend bool operator>(const String& s1, const String& s2);
	friend bool operator==(const String& s1, const String& s2);
	char& operator[](int i);
	const char& operator[](int i) const ;
	String& operator=(const char*);
	String& operator=(const String&);//operator przypisania (bedzie potrzebny pozniej)
	String operator+(const String& s1); // metoda czyli np s2+"sdaas" ale nie "dasas" + s2 tak nie moze byc..
	friend String operator+(const char *lan, const String& s2);
	String& stringlow();
	String& stringup();
	int ile_wystapien(const  char* lan);
};

