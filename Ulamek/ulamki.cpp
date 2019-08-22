#include "ulamki.h"
#include <cstdlib>
int Ulamek::numbers_of_objects = 0;
Ulamek::Ulamek(int l, unsigned m) {
	numbers_of_objects++;
	licznik = new int[1];
	mianownik = new unsigned int[1];
	*licznik = l;
	*mianownik = m;
}
Ulamek::Ulamek(const Ulamek& p) { // konstruktor kopiujacy konstruuje jawny i robie gleboka kopie (to jest wymog przy wskaznikach!!!!!!!!!!
	numbers_of_objects++;
	licznik = new int[1];
	mianownik = new unsigned int[1];
	*licznik = *p.licznik;
	*mianownik = *p.mianownik;
}

Ulamek& Ulamek::operator=(const Ulamek& p) { // przypisywanie obiektu klasy Ulamek do innego obiektu tej samej klasy!!!!!!!!!!!!!
	if (this == &p)
		return *this;
	numbers_of_objects++;
	delete[] licznik;
	delete[] mianownik;
	licznik = new int[1];
	mianownik = new unsigned int[1];
	*licznik = *p.licznik;
	*mianownik = *p.mianownik;
	return *this;
}
Ulamek::~Ulamek() {
	numbers_of_objects--;
	delete[] licznik;
	delete[] mianownik;
}
istream& operator>>(istream& is, Ulamek& p) {
	std::cout << "Podaj licznik: ";
	is >> *p.licznik;
	std::cout << "Podaj mianownik: ";
	is >> *p.mianownik;
	return is;
}

ostream& operator<<(ostream& op, const Ulamek& p) {
	if (*p.licznik == 0)
		std::cout << "0";
	else if (*p.mianownik == 0) {
		std::cout << "Zero w mianowniku?";
			exit(EXIT_FAILURE);
	}
	else
		std::cout << *p.licznik << std::endl << "__" << std::endl << *p.mianownik;
	return op;
}

Ulamek Ulamek::operator+(const Ulamek& p) {
	if(p.mianownik== mianownik)
		return Ulamek(*licznik + *p.licznik, *mianownik);
	unsigned int dzielnik = lcm(*mianownik, *p.mianownik);
	int licznik_nowy_1 = *licznik* (dzielnik / *mianownik);
	int licznik_nowy_2 = *p.licznik* (dzielnik / *p.mianownik);
	return Ulamek(licznik_nowy_1 + licznik_nowy_2, dzielnik);
}

Ulamek Ulamek::operator-(const Ulamek& p){
	if(*p.mianownik==*mianownik)
		return Ulamek(*licznik - *p.licznik, *mianownik);
	unsigned int dzielnik = lcm(*mianownik, *p.mianownik);
	int licznik_nowy_1 = *licznik * (dzielnik / *mianownik);
	int licznik_nowy_2 = *p.licznik * (dzielnik / *p.mianownik);
	return Ulamek(licznik_nowy_1 - licznik_nowy_2, dzielnik);
};

Ulamek Ulamek::operator*(const Ulamek& p) {
	return Ulamek(*licznik * *p.licznik, *mianownik * *p.mianownik);
}

Ulamek Ulamek::operator/(const Ulamek& p) {
	return Ulamek(*licznik * *p.mianownik, *mianownik * *p.licznik);
}


int gcd(int a, int b) {

	while (true) {
		if (a == 0) {
			return b;
		}
		b %= a;
		if (b == 0) {
			return a;
		}
		a %= b;
	}
}

int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}
