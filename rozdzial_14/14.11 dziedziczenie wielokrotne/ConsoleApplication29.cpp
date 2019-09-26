
#include <iostream>
#include "worker0.h"
const int SIZE = 5;
int main(void) {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::strchr;
	Worker* lolas[SIZE];
	int ct;
	char choice;
	for (ct = 0; ct < SIZE; ct++) {
		cout << "Podaj kategorie pracownika:\n"
			<< "k: kelner p:piosenkarz "
			<< "s: spiewajacy kelner w:wyjscie\n";
		cin >> choice;
		while (strchr("kpsw", choice) == NULL) {
			cout << "Wpisz k,p,s, lub w: ";
			cin >> choice;
		}
		if (choice == 'w')
			break;
		switch (choice) {
		case 'k': lolas[ct] = new Waiter;
			break;
		case 'p': lolas[ct] = new Singer;
			break;
		case 's': lolas[ct] = new SingingWaiter;
			break;
		}
		cin.get();
		lolas[ct]->Set(); // jakim cudem niezainicjalizowana?
	}
	cout << "Lista pracownikow:\n";
	for (int i = 0; i < ct; i++) {
		cout << endl;
		lolas[i]->Show();
	}
	for (int i = 0; i < ct; i++) {
		delete lolas[i];
	}
	return 0;
}
