#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "port.h"
int main(){
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	Port* wsk[2];
	wsk[0] = new Port("Gallo", "ledkko brazowy", 20);
	wsk[1] = new VintagePort("Gallo", "ledkko brazowy", 20, "Zaczek", 2019);
	*wsk[1] = *wsk[1] - 3;
	/*string imie = "Imie";
	string nazwisko = "Nazwisko";
	Port *zmienna = new Port(imie.c_str(), nazwisko.c_str(), 21);
	*zmienna += 53;
	std::cout<< *zmienna;*/
	for (int i = 0; i < 2; i++) {
		wsk[i]->Show();
		std::cout << std::endl;
	}
	cout << *wsk[0];
	cout << *wsk[1];
	//VintagePort* zmienna = new VintagePort("Galilieo", "zielony", 33, "Bula", 1998);
	//VintagePort* zmienna2 = new VintagePort("Nieprawda", "zolty", 15, "Papa", 1998);
	//Port* zmienna3 = new Port("Gallo", "ledkko brazowy", 20);
	
	VintagePort zmienna("Galilieo", "zielony", 33, "Bula", 1998);
	Port zmienna3("Gallo", "ledkko brazowy", 20);
	zmienna3 = zmienna;
	cout << zmienna;
}
