#pragma once
#ifndef BANK_H_
#define BANK_H_
#include <iostream>
class Bank{
private:
	std::string nazwisko;
	std::string numer_rachunku;
	double saldo_konta;
public:
	Bank(std::string nazw = "nie podano", std::string nr = "brak", double saldo = 0.0);
	void wyswietl(void) const ;
	void depozyt(double kwota);
	void wydaj(double kwota);
};
#endif //