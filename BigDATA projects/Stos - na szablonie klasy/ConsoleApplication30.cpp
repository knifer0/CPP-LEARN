#include <iostream>
#include "stos.h"
#include <cstdlib>

int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	Stos<int>* p1 = new Stos <int>;
	char choice{};
	int number{};
	while (1) {
		linia();
		cout << "1. Dodaj na stos" << endl; // push
		cout << "2. Zdemij ze stosu" << endl; // pop
		cout << "3. Sprawdz stos" << endl;
		linia();
		cin >> choice;
		while (cin.get() != '\n')
			continue;
		switch (choice) {
		case '1':
			if (!p1->isfull()) {
				cout << "Podaj liczbe: ";
				while (!(cin >> number)) {
					cin.clear();
					while (cin.get() != '\n')
						continue;
				}
				p1->push(number);
				while (cin.get() != '\n')
					continue;
			}
			break;

		case '2':
			if (!p1->isempty())
				p1->pop(number);
			break;

		case '3':
			linia();
			p1->print();
			break;
		case EOF:
			exit(1);
		default:
			std::cout << "Nieprawidlowa operacja" << endl;
			exit(EXIT_SUCCESS);
			break;
		}
	}
	delete p1;
	return 0;
}