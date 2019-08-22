#pragma once
#include <iostream>
using std::ostream;
using std::istream;
class Ulamek{
	static int numbers_of_objects;
	int *licznik;
	unsigned int *mianownik;
public:
	Ulamek(int l = 0, unsigned m = 0);
	Ulamek(const Ulamek& p);//konstruktor kopiujacy
	~Ulamek();
	int HowMany() {
		return numbers_of_objects;
	}
	friend ostream& operator<<(ostream& op, const Ulamek& p);
	friend istream& operator>>(istream& op, Ulamek& p);
	Ulamek& operator=(const Ulamek& p);
	Ulamek operator+(const Ulamek& p);
	Ulamek operator-(const Ulamek& p);
	Ulamek operator*(const Ulamek& p);
	Ulamek operator/(const Ulamek& p);
};

int gcd(int a, int b);
int lcm(int a, int b);