#pragma once
class Plorg{
private:
	enum{MAX=19};
	char imie[MAX+1]; // max 19 liter ale 1 na znak zerowy
	int wspolczynnik_systosci;
public:
	Plorg(int wspolczynnik=50, const char *im="Plorga");
	void zmien_sytosc(int wartosc);
	void powiedz(void) const;

};

