#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
class Student {
	friend class Menu; // zaprzyjazniam cala klase, zadanie dodatkowe: zaprzyjaznic tylko 1 funkcje tak zeby inna klasa z niej korzystala 
private:
	string imie;
	unsigned int numer_legitymacji;
	string nazwisko;
	int ocena_fizyka;
	int ocena_analiza;
	int ocena_informatyka;
	int ocena_algebra;
	int ocena_angielski;
	//Student(const Student& s);// konstruktor kopiujacy
	Student& operator=(const Student& q) { return *this; } // tez atrapa
public:
	int NumberOfElements();
	Student(string im = "", string nazw = "", unsigned int nr_leg = 0, int o_fizyka = 0, int o_analiza = 0, int o_informatyka = 0, int o_algebra = 0, int o_angielski = 0);
	~Student();
};
class Menu{
private:
	std::fstream plik;
	std::vector <Student> lista_studentow;
public:
	void linia(void) {
		for (int i = 0; i < 40; i++)
			cout << "-";
		cout << endl;
	}
	void otworz_plik(std::fstream &plik_fun);
	void rozpocznij_program();
	void dodaj_studenta();
	void wypisz_studenta(); // tutaj moga byc juz nawet private
	void DodajDoPliku(string &im, string &nazw, unsigned int &nr_leg , int &o_fizyka, int &o_analiza, int &o_informatyka, int &o_algebra, int &o_angielski);
	void ZaladujDoProgramu();
	void ZamienDaneWPliku(unsigned int key, int i);
	void pomin_wyraz();
	void pomin_znaki();
	void wypisz_znalezione_dane(std::vector <Student> &lista_studentow, int i);
	int szukajNazwisko(string &szukaj);
	int szukajLegitymacje(unsigned int &szukaj);
	void zmien_oceny(std::vector <Student> &lista_studentow, int i);
	bool SprawdzPoprawnoscDanych();

};
// trzeba znalezc studenta po indeksie w pliku i zamienic dane 
void bufor(void);