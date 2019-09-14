// ConsoleApplication16.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "dma.h"
int main(){
	using std::cout;
	using std::endl;
	baseDMA shirt("Portabelly", 8);
	lacksDMA ballon("czerwony", "Blimpo", 4);
	hasDMA map("Merkator", "Bufallo Keys", 5);
	cout << "Wypisanie obiektu baseDMA:" << endl;
	cout << shirt << endl;
	cout << "Wypisanie obiektu lacksDMA:" << endl;
	cout << ballon << endl;
	cout << "Wypisanie obiektu hasDMA:" << endl;
	cout << map << endl;
	lacksDMA ballon2(ballon); // konstruktor kopiujacy
	cout << "Wynik kopiowania lacksDMA:\n";
	cout << ballon2 << endl;
	hasDMA map2;
	map2 = map; // przeciazony operator przypisania
	/*cout << "Wynik przypisania hasDMA:\n";
	cout << map2 << endl;*/
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
