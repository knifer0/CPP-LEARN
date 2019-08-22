#include "Golf.h"
#include <iostream>
#include <cstring>
#include <cstring>
Golf::Golf(std::string m_name, int m_handicap ){
	strcpy_s(fullname, Len - 1, m_name.c_str());
	handicap = m_handicap;
}


void Golf::setgolf(void) {
	char name[Len];
	int capy;
	std::cout << "Podaj nazwisko: ";
	std::cin.get(name, Len);
		std::cout << "Podaj wartosc handicapu: ";
		while (!(std::cin >> capy)) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			std::cout << "Podaj wartosc numeryczna: ";
		}
		std::cin.get();
		*this = Golf(name, capy);
}
void Golf::handicap_upp(int hc) {
	handicap = hc;
}
void Golf::showgolf() const {
	std::cout << "Nazwisko: " << fullname << "\nhandicap: " << handicap << std::endl;
	linia();
}




void linia(void) {
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
}