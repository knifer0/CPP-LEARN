#include "pory_roku.h"
#include <iostream>
void SALES::Sales::setSales(Sales &s) {
	std::cout << "Podaj kolejno zarobek za 4 kwartaly (tylko liczby, moga byc zmiennoprzecinkowe)" << std::endl;
	for (int i = 0; i < 4; i++) {
		while (!(std::cin >> s.sales[i])) {
			std::cout << "Podaj wartosc liczbowa" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
	}
	*this = Sales(s.sales, 4);
}
SALES::Sales::Sales(const double ar[], int n) {
	double srednia = 0, moj_max = 0, moj_min = *ar, suma = 0;
	for (int i = 0; i < n; i++) {
		if (*ar > moj_max)
			moj_max = *ar;
		if (*ar < moj_min)
			moj_min = *ar;
		suma += *ar;
		ar++;
	}

	sales[0] = moj_min;
	average = suma / (double)n;
	max = moj_max;
	min = moj_min;
	for (int i = 1; i < 4; i++)
		sales[i] = 0;
}
void SALES::Sales::showSales()const {
	using std::cout;
	using std::endl;
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
	cout << "Srednia: " << average << endl;
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;
	cout << "Tablica: ";
	for (int i = 0; i < 4; i++)
		cout <<sales[i] << "\t";
	cout << endl;
}
SALES::Sales::Sales() {
	average = 0;
	max = 0;
	min = 0;
	for (int i = 0; i < QUARTERS; i++)
		sales[i] = 0;
}
SALES::Sales::~Sales() {
	;//destruktor
}