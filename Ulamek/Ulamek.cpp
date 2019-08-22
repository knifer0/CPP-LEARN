// Ulamek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "ulamki.h"
/*Interfejs:
-dodawanie ulamkow, odejmowanie, mnozenie, dzielenie, przypisywanie, inicjalizacja z przypisaniem (konstruktor kopiujacy)
-wczytywanie, wypisywanie ulamkow*/
int main(){
	using std::endl;
	using std::cout;
	using std::cin;
	Ulamek* ulamki = new Ulamek[10];
	ulamki[0] = { 1,2 };
	ulamki[1] = { 2,3 };
	cout << ulamki[0]*ulamki[1]<<endl;
	cin >> ulamki[3];
	delete[] ulamki;
	cout << endl;
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
