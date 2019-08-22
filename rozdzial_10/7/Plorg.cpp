#include "Plorg.h"
#include <iostream>
#include <cstring>
Plorg::Plorg(int wspolczynnik, const char* im){
	wspolczynnik_systosci = wspolczynnik;
	strcpy_s(imie, MAX, im);
}
void Plorg::zmien_sytosc(int wartosc) {
	wspolczynnik_systosci = wartosc;
}
void Plorg::powiedz(void) const {
	std::cout << "Nazywam sie " << imie << ", jestem syty na " << wspolczynnik_systosci << std::endl;
}