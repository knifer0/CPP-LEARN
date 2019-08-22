#include "bank.h"
#include <iostream>
#include <cstdio>
using std::cout;
using std::cin;
using std::endl;
using std::string;
Bank::Bank(string nazw, string nr, double saldo) {
	nazwisko = nazw;
	numer_rachunku = nr;
	saldo_konta = saldo;
}
void Bank::wyswietl(void) const  {
	
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Numer rachunku: " << numer_rachunku << endl;
	printf("Saldo konta: %.2fzl\n", saldo_konta);
}
void Bank::depozyt(double kwota)  {
	saldo_konta += kwota;
}
void Bank::wydaj(double kwota) {
	if (kwota > saldo_konta)
		cout << "Masz za malo pieniedzy" << endl;
	saldo_konta -= kwota;
}