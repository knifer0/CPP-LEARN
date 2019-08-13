#include "golf.h"
#include <iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
void setgolf(golf& g, const char* name, int hc) {
	g.handicap = hc;
	strcpy_s(g.fullname,Len-1,name);
}
int setgolf(golf& g) {
	std::cout << "Podaj nazwisko: ";
	std::cin.get(g.fullname, Len);
	if ((int)strlen(g.fullname) == 0)
		return 0;
	else {
		std::cout << "Podaj wartosc handicapu: ";
		while (!(std::cin >> g.handicap)) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Podaj wartosc numeryczna: ";
		}
		std::cin.get();
		return 1;
	}
}
void linia(void) {
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
}
void handicap(golf& g, int hc) {
	g.handicap = hc;
}
void showgolf(const golf& g) {
	std::cout << "Nazwisko: " << g.fullname << "\nhandicap: " << g.handicap << std::endl;
	linia();
}