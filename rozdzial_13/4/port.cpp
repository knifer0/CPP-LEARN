#define _CRT_SECURE_NO_WARNINGS
#include "port.h"


void Port::ChangeBottles(const Port& p) {
	bottles = p.bottles;
}
void Port::ChangeBrand(const Port& p) {
	delete[] brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
}
void Port::ChangeStyle(const Port& p) {
	strncpy(style, p.style, 20);
}

Port::Port(const char* br, const char* st, int b) {
	brand = new char[int(1 + strlen(br))];
	strcpy(brand, br);
	strncpy(style, st, 20);
	bottles = b;
}

Port::Port(const Port& p) :Port(p.brand, p.style, p.bottles) {};

Port& Port::operator=(const Port& p) {
	if (this == &p)
		return *this;
	else {
		delete[] brand;
		brand = new char[int(strlen(p.brand)) + 1];
		strcpy(brand, p.brand);
		strncpy(style, p.style, 20);
		bottles = p.bottles;
		return *this;
	}
}

Port& Port::operator+=(int b) {
	bottles += b;
	return *this;
}
Port& Port::operator+(int b) {
	bottles += b;
	return *this;
}

Port& operator+(int b, Port& p) {
	p.bottles += b;
	return p;
}

Port& Port::operator-=(int b) {
	bottles -= b;
	return *this;
}

Port& Port::operator-(int b) {
	bottles -= b;
	return *this;
}

Port& operator-(int b, Port& p) {
	p.bottles -= b;
	return p;
}

void Port::Show()const {
	std::cout << "Marka: " << brand << std::endl;
	std::cout << "Rodzaj: " << style << std::endl;
	std::cout << "Butelek: " << bottles << std::endl;
}

//std::ostream& operator<<(std::ostream& os, const Port& p) {
//	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
//	return os;
//}


VintagePort::VintagePort() :Port() {
	nickname = new char[int(strlen("Brak")) + 1];
	strcpy(nickname, "Brak");
	year = 0;
}

VintagePort::VintagePort(const char* br, const char* st, int b, const char* nn, int y) :Port(br, st, b) {
	nickname = new char[int(strlen(nn)) + 1];
	strcpy(nickname, nn);
	year = y;
}

VintagePort::VintagePort(const VintagePort& vp) : Port(vp.GetBrand(), vp.GetStyle(), vp.BottleCount()) {
	nickname = new char[int(strlen(vp.nickname)) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}


VintagePort& VintagePort::operator=(const VintagePort& vp) {
	if (this == &vp)
		return *this;
	delete[] nickname;
	nickname = new char[int(strlen(vp.nickname)) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	ChangeBrand(vp);
	ChangeBottles(vp); // uwaga: zmieniam prywatne atrybuty przez publiczne metody ale klasy bazowej! przez klase pochodna nie moge tego zrobic
	ChangeStyle(vp);
	return *this;
}

void VintagePort::Show()const {
	Port::Show();
	std::cout << "Nazwisko: " << nickname << std::endl;
	std::cout << "Rocznik: " << year << std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp) {

	os << vp.GetBrand() << ", " << vp.GetStyle() << ", " << vp.BottleCount() << "," << vp.nickname << ", " << vp.year << std::endl;
	return os;
}

void Port::print(std::ostream& o) const {
	o << brand << ", " << style << ", " << bottles << std::endl;
}

void VintagePort::print(std::ostream& o) const {
	o << GetBrand() << ", " << GetStyle() << ", " << BottleCount() << "," << nickname << ", " << year << std::endl;
}

