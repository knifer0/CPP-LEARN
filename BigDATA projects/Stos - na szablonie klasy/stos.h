#include <iostream>
#include <windows.h>
#pragma once
#ifndef STOS_H_
#define STOS_H_

//DEFINICJE KLAS ZARAZ PO PROTOTYPIE KLASY!!
template <class T>
class Stos {
private:
	enum { MAX = 10 };
	T stack[MAX];
	int top;
public:
	Stos();
	bool isempty() const;
	bool isfull() const;
	bool push(const T& value);
	bool pop(T& value);
	bool print(void);
};

template <class T>
Stos<T>::Stos() {
	top = 0;
}
template <class T>
bool Stos<T>::isempty() const {
	system("cls");
	if (top == 0) {
		std::cout << "Stos jest pusty" << std::endl;
		return 1;
	}
	else
		return 0;
}
template <class T>
bool Stos<T>::isfull() const {
	if (top == MAX)
		return 1;
	else
		return 0;
}
template <class T>
bool Stos<T>::push(const T& value) {
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
template <class T>
bool Stos<T>::pop(T& value) {
	system("cls");
	if (top > 0) {
		value = stack[--top];
		std::cout << "Zdjeto ze stosu " << value << std::endl;
		return true;
	}
	else
		return false;
}
template <class T>
bool Stos<T>::print(void) {
	system("cls");
	if (top == 0) {
		std::cout << "stos pusty!" << std::endl;
		return false;
	}
	else {
		for (int i = top - 1; i >= 0; i--) {
			std::cout << stack[i] << std::endl;
		}
		return true;
	}
}
void linia(void);
#endif