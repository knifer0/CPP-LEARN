﻿#include "brass.h"
int main(){
	string temp;
	long tempnum;
	double tempbal;
	char kind;
	AcctABC *p_clients[3];
	AcctABC* p___s;
	for (int i = 0; i < 2; i++) {
		cout << "Podaj imie i nazwisko klienta: ";
		getline(cin, temp);
		cout << "Podaj numer rachunku klienta: ";
		cin >> tempnum;
		cout << "Podaj poczatkowy stan konta: ";
		cin >> tempbal;
		cin.get();
		cout << "Wpisz 1 dla rachunku Brass lub 2 dla rachunku BrassPlus: ";
		while (cin >> kind && (kind != '1' && kind != '2'))
			cout << "Wpisz 1 lub 2:";
		if (kind == '1')
			p_clients[i] = new Brass(temp, tempnum, tempbal);
		else {
			double tmax, trate;
			cout << "Podaj limit debetu: ";
			cin >> tmax;
			cout << "Podaj stope oprocentowania jako ulamek dziesietny";
			cin >> trate;
			p_clients[i] =  new BrassPlus(temp, tempnum, tempbal, tmax, trate);
		}
		while (cin.get() != '\n')
			continue;
	}
	for (int i = 0; i < 3; i++){
		p_clients[i]->ViewAcct();
		cout << endl;
	}
	/*for (int i = 0; i < 3; i++){
		delete p_clients[i];
	}*/
}

