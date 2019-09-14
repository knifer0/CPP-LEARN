#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "dma.h"
#include <string>
const int ilosc = 2;
int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	baseDMA* wskazniki[ilosc];
	string labelek{};
	int ratingek{};
	char kind{};
	string kolorek{};
	string stylek{};
	for (int i = 0; i < ilosc; i++) {
		cout << "Podaj label: ";
		getline(cin, labelek);
		cout << "Podaj rating: ";
		cin >> ratingek;
		std::cout << "Wpisz 1 dla lacksDMA lub 2 dla hasDMA: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "Wpisz 1 lub 2 ";
		if (kind == '1') {
			while (cin.get() != '\n')
				continue;
			cout << "Podaj kolor: ";
			getline(cin, kolorek);
			wskazniki[i] = new lacksDMA(kolorek.c_str(), labelek.c_str(), ratingek);
		}
		else {
			while (cin.get() != '\n')
				continue;
			cout << "Podaj styl: ";
			getline(cin, stylek);
			wskazniki[i] = new hasDMA(stylek.c_str(), labelek.c_str(), ratingek);
		}
	}
	cout << endl;
	for (int i = 0; i < ilosc; i++) {
		wskazniki[i]->View();
		cout << endl;
	}
	for (int i = 0; i < ilosc; i++) {
		delete wskazniki[i];
	}
}