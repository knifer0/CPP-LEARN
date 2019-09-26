#include "worker0.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
//metody chronione
void Worker::Data()const {
	cout << "Imie i nazwisko: " << fullname << endl;
	cout << "Numer identyfikacyjny: " << id << endl;
}

void Worker::Get() {
	getline(cin, fullname);
	cout << "Podaj numer identyfikacyjny pracownika: ";
	cin >> id;
	while (cin.get() != '\n')
		continue;
}
void Worker::Show()const {

}

void Worker::Set() {

}
Worker::~Worker(){} // potrzebna, nawet jezeli jest czysto wirtualny

//metody klasy Waiter
void Waiter::Set() {
	cout << "Podaj imie i nazwisko klenera: ";
	Worker::Get();
	Get();
}

void Waiter::Show()const {
	cout << "Kategoria kelner\n";
	Worker::Data();
	Data();
}

void Waiter::Data()const {
	cout << "Elegancja: " << panache << endl;
}

void Waiter::Get() {
	cout << "Podaj poziom elegancji kelnera: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}

//metody klasy singer

void Singer::Set() {
	cout << "Podaj imie i nazwisko piosenkarza: ";
	Worker::Get();
	Get();
}

void Singer::Show()const {
	cout << "Kategoria piosenkarz\n";
	Worker::Data();
	Data();
}

// metody chronione
void Singer::Data()const {
	cout << "Skala glosu: " << voice << endl;
}

void Singer::Get() {
	Worker::Set();
	cout << "Podaj numer skali glosu piosenkarza\n";
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}

//metody klasy SingingWaiter

void SingingWaiter::Data()const {
	Singer::Data();
	Waiter::Data();
}

void SingingWaiter::Get() {
	Waiter::Get();
	Singer::Get();
}

void SingingWaiter::Set() {
	cout << "Podaj imie i nazwisko spiewajacego kelnera: ";
	Worker::Get();
	Get();
}

void SingingWaiter::Show()const {
	cout << "Kategoria: Spiewajacy kelner\n";
	Worker::Data();
	Data();
}










