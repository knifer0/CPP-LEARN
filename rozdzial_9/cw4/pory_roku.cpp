#include "pory_roku.h"
#include <iostream>
void SALES::setSales(Sales& s) {
	std::cout << "Podaj kolejno zarobek za 4 kwartaly (tylko liczby, moga byc zmiennoprzecinkowe)" << std::endl;
	for (int i = 0; i < 4; i++) {
		while (!(std::cin >> s.sales[i])) {
			std::cout << "Podaj wartosc liczbowa" << std::endl;
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
	}
	double srednia = 0, moj_max = 0, moj_min=s.sales[0], suma = 0;
	for(double x: s.sales){ // petla zakresowa for ;)
		if (x > moj_max)
			moj_max = x;
		if (x < moj_min)
			moj_min = x;
		suma +=x;
	}
	srednia = suma / (double)4;
	s.average = srednia;
	s.max = moj_max;
	s.min = moj_min;
}
void SALES::setSales(Sales& s, const double ar[], int n) {
	double srednia = 0, moj_max = 0, moj_min = *ar, suma = 0;
	for (int i = 0; i < n; i++) {
		if (*ar > moj_max)
			moj_max = *ar;
		if (*ar < moj_min)
			moj_min = *ar;
		suma += *ar;
		ar++;
	}
	
	s.sales[0] = moj_min;
	s.average = suma/(double)n;
	s.max = moj_max;
	s.min = moj_min;
	for (int i = 1; i < 4; i++)
		s.sales[i] = 0;
}
void SALES::showSales(const Sales& s) {
	using std::cout;
	using std::endl;
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
	cout << "Srednia: " << s.average << endl;
	cout << "Min: " << s.min << endl;
	cout << "Max: " << s.max << endl;
	cout << "Tablica: ";
	for (int i = 0; i < 4; i++)
		cout << s.sales[i] << "\t";
	cout << endl;
}