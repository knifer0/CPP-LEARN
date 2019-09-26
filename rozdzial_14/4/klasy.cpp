#include "klasy.h"
//person
void Person::Show()const {
	using std::cout;
	using std::endl;
	cout << "Imie: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
}

//gunslinger
void Gunslinger::Show()const {
	using std::cout;
	using std::endl;
	Person::Show();
	cout << "Czas wyciagniecia reworweru: " << czas_pistolet << endl;
	cout << "Liczba naciec: " << liczba_naciec << endl;
}

//pokerplayer
int PokerPlayer::Draw() {
	return rand() % 52 + 1;
}
void PokerPlayer::Show()const {
	Person::Show();
}

//BadDude

void BadDude::Show() {
	std::cout << "Czas wyciagniecia reworweru: " << Gdraw() << std::endl;
	std::cout << "zwrocona karta o nr.: " << Cdraw() << std::endl;
}