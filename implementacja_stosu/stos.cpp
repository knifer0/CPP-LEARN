#include "stos.h"
#include <iostream>
#include <windows.h>
Stos::Stos(){
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
bool Stos::push(const int& value) {
	system("cls");
	if (top < MAX) {
		stack[top++] = value;
		std::cout << "Dodano " << value << " do stosu" << std::endl;
		return true;
	}
	else {
		std::cout << "Stos jest pelen" << std::endl;
		return false;
	}
}
bool Stos::pop(int& value) {
	system("cls");
	if (top > 0) {
		value = stack[--top];
		std::cout << "Zdjeto ze stosu " << value << std::endl;
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
			std::cout << stack[i] << std::endl;
		}
		return true;
	}
}

void linia(void) {
	for (int i = 0; i < 40; i++)
		std::cout << "-";
	std::cout << std::endl;
}