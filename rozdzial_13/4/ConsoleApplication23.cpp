#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "port.h"
int main() {
	using std::cin;
	using std::cout;
	using std::endl;
	using std::string;
	
	VintagePort zmienna("Galilieo", "zielony", 33, "Bula", 1998);
	Port zmienna3("Gallo", "ledkko brazowy", 20);
	Port* wsk = &zmienna;
	zmienna3 = zmienna;
	cout << *wsk;
}