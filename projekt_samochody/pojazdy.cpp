#include "pojazdy.h"
int Pojazd::ilosc_pojazdow = 0;
Pojazd::Pojazd(unsigned int ro, unsigned int pr, unsigned int ps) : rocznik(ro), przebieg(pr),pojemnosc_silnika(ps) { ilosc_pojazdow++; }
Pojazd::~Pojazd() {
	ilosc_pojazdow--;
}


//samochod

Samochod::~Samochod() {}

Samochod::Samochod(unsigned int ro, unsigned int pr, unsigned int ps, std::string marka, std::string model, std::string paliwo, std::string stan, std::string kol) : Pojazd(ro, pr, ps) {
	marka_pojazdu = marka;
	model_pojazdu = model;
	rodzaj_paliwa = paliwo;
	stan_pojazdu = stan;
	kolor = kol;
}

void Samochod::drukuj() {
	std::cout << "KATEGORIA: SAMOCHODY*" << std::endl;
	std::cout << "Marka samochodu:" << marka_pojazdu << std::endl;
	std::cout << "Model:" << model_pojazdu << std::endl;
	std::cout << "Rocznik:" << get_year() << std::endl;
	std::cout << "Przebieg:" << get_przebieg() << std::endl;
	std::cout << "Pojemnosc silnika:" << get_silnik() << std::endl;
	std::cout << "Rodzaj paliwa:" << rodzaj_paliwa << std::endl;
	std::cout << "Stan pojazdu:" << stan_pojazdu << std::endl;
	std::cout << "Kolor:" << kolor << std::endl;
}