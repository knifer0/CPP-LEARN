﻿#include <iostream>
#include "pair.h"
#include "wine.h"
#include <string>
int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	cout << "Podaj nazwe wina: ";
	char lab[50];
	cin.getline(lab, 50);
	cout << "Podaj liczbe rocznikow: ";
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);
	holding.GetBottles();
	holding.Show();
	const int YRS = 3;
	int y[YRS] = { 1993,1995,1998 };
	int b[YRS] = { 48,60,72 };
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Laczna liczba butelek wina " << more.Label() << ": " << more.sum() << endl;
	std::cout << "Koniec\n";
}

