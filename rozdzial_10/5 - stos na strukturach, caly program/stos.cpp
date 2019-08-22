#include "stos.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <cstring>
#include <cstdlib>
#include <array>
char name[35];
double suma_naleznosc = 0;
Stos::Stos(){
	for (customer& x : stack) {
		x.payment = 0.0;
		x.fullname[0] = '\0';
	}
	/*for (int i = 0; i < MAX; i++) {
		stack[i].payment = 0.0;
		stack[i].fullname[0] = '\0';
	}*/ // komunikat ze stack nie jest zainicjonowany
	top = 0;
}
bool Stos::isempty() const  {
	system("cls");
	if (top == 0) {
		std::cout << "Stos jest pusty" << std::endl;
		return 1;
	}
	else
		return 0;
}
bool Stos::isfull() const{
	if (top == MAX)
		return 1;
	else
		return 0;
}
bool Stos::push(void) {
	system("cls");
	if (top < MAX) {
		bool poprawne =false;
		while (!poprawne) {
			std::cout << "Podaj nazwisko: ";
			poprawne = true;
			std::cin.getline(name, 49);
			for (int i = top - 1; i >= 0; i--) {
				if (strcmp(name, stack[i].fullname) == 0) {
					std::cout << "Uwaga!! Wprowadzone nazwisko juz istnieje w bazie, wybierz inne" << std::endl;
					poprawne = false;
				}
			}
		}
		strcpy_s(stack[top].fullname,35,name);
		std::cout << "Podaj naleznosc: ";
		while (!(std::cin >> stack[top].payment)) {
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
		}
		top++;
		system("cls");
		std::cout << "Dodano " << stack[top-1].fullname << " do stosu" << std::endl;
		return true;
	}
	return false;
}
bool Stos::pop(void) {
	system("cls");
	if (top > 0) {
		suma_naleznosc += stack[--top].payment;
		std::cout << "Uzyskano: " << stack[top].payment << std::endl;
		std::cout << "Zdjeto ze stosu " << stack[top].fullname << std::endl;
		std::cout << "Suma twoich pieniedzy: " << suma_naleznosc << std::endl;
		return true;
	}
	else
		return false;
}
bool Stos::print(void) {
	system("cls");
	if (top == 0) {
		std::cout << "stos pusty!"<<std::endl;
		return false;
	}
	else {
		for (int i = top - 1; i >= 0; i--) {
			std::cout << "Nazwisko: " << stack[i].fullname <<"\tNaleznosc: "<<stack[i].payment<< std::endl;
			linia();
		}
		return true;
	}
}

void linia(void) {
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
}