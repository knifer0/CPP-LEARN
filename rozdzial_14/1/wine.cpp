#include "wine.h"

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : wina(IntArray(y), IntArray(y)) {
	label = l;
	liczba_lat = y;
	for (int i = 0; i < y; i++) {
		wina.first()[i] = yr[i];
		wina.second()[i] = bot[i];
	}
}

Wine::Wine(const char* l, int y) :wina(IntArray(y), IntArray(y)) {
	label = l;
	liczba_lat = y;
}

void Wine::GetBottles() {
	std::cout << "Podaj dane o winie " << label << "dla" << liczba_lat << " rocznikow\n";
	for (int i = 0; i < liczba_lat; i++) {
		std::cout << "Podaj rocznik wina: ";
		std::cin >> wina.first()[i];
		std::cout << "Podaj liczbe butelek z danego rocznika: ";
		std::cin >> wina.second()[i];
	}
}

std::string& Wine::Label() {
	return label;
}

int Wine::sum() {
	int suma = 0;
	for (int i = 0; i < liczba_lat; i++)
		suma += this->wina.second()[i];
	return suma;
}
void Wine::Show()const {
	std::cout << std::endl;
	std::cout << "Wino: " << label << std::endl;
	std::cout << "\tRocznik   Butelki\n";
	for (int i = 0; i < liczba_lat; i++) {
		std::cout << "\t" << wina.first()[i] << "       " << wina.second()[i] << std::endl;
	}
}