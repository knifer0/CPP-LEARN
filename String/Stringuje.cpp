// Stringuje.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "String.h"
#define _CRT_SECURE_NO_WARNINGS
#include <string>
//!!! UWAGA DO PROGRAMU: o 1 znak wiecej jest wszedzie niz powinno bo Visual studio wyrzuca blad w przeciwnym razie - zagadka ;) 
int main() {
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	String* s1 = new String(" i ucze sie C++");
	String* s2 = new String("Podaj swoje imie: ");
	String* s3 = new String;
	cout << *s2;
	cin >> *s3;
	*s2 = "Mam na imie " + *s3;
	cout << *s2 << endl;
	*s2 = *s2 + *s1;
	s2->stringup();
	cout << "Ciag\n" << *s2 << "\nzawiera " << s2->ile_wystapien("A") << " 'A'\n";
	*s1 = "czerwona";
	String* rgb = new String[3]{ String(*s1), String("zielona"), String("niebieska") };
	cout << "Podaj nazwer barwy podstawowej: ";
	String *ans = new String;
	bool success = false;
	while (cin >> *ans) {
		ans->stringlow();
		for (int i = 0; i < 3; i++) {
			if (*ans == rgb[i]) {
				cout << "Prawidlowo!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Sprobuj ponownie!\n";

	}
	cout << "Zegnam\n";
	cout << endl;
	delete s1; delete s2; delete s3; delete ans;
	delete[] rgb;
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
