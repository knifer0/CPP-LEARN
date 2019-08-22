// ConsoleApplication14.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "stos.h"
#include <cstdlib>
int main(){
	using std::cout;
	using std::endl;
	using std::cin;
	Stos p1;
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
			if (!p1.isfull()) {
				p1.push();
				while (cin.get() != '\n')
					continue;
			}
			else {
				system("cls");
				std::cout << "Stos jest pelen!" << std::endl;
			}
			break;
		case '2':
			if (!p1.isempty())
				p1.pop();
			break;

		case '3':
			linia();
			p1.print();
			break;
		case EOF:
			exit(1);
		default:
			std::cout << "Nieprawidlowa operacja" << endl;
			exit(EXIT_SUCCESS);
			break;
		}
	}
	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
