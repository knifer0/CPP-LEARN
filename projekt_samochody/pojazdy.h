#pragma once
#include <string>
#include <iostream>
class Pojazd {
private:
	unsigned int rocznik;
	unsigned int przebieg;
	unsigned int pojemnosc_silnika;
	static int ilosc_pojazdow;
public:
	Pojazd(unsigned int, unsigned int, unsigned int);
	virtual ~Pojazd();
	virtual void drukuj() = 0;
	unsigned int& get_year() { return rocznik; };
	unsigned int& get_przebieg() {return przebieg;};
	unsigned int& get_silnik() { return pojemnosc_silnika; };
};

class Samochod : public Pojazd {
private:
	std::string marka_pojazdu;
	std::string model_pojazdu;
	std::string rodzaj_paliwa;
	std::string stan_pojazdu;
	std::string kolor;
public:
	Samochod(unsigned int, unsigned int, unsigned int, std::string, std::string, std::string, std::string, std::string);
	~Samochod();
	void drukuj();
};




