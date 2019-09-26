#pragma once
#include <iostream>

//person
class Person {
private:
	std::string imie;
	std::string nazwisko;
public:
	Person(std::string i="brak",std::string n="brak") :imie(i),nazwisko(n){}
	virtual void Show()const;
	~Person() {}
};

//gunslinger
class Gunslinger : virtual public Person {
private:
	double czas_pistolet;
	int liczba_naciec;
public:
	double& Draw() { return czas_pistolet;}
	Gunslinger(std::string i = "brak", std::string n = "brak", double czas = 0.0, int liczba = 0) : Person(i, n), czas_pistolet(czas), liczba_naciec(liczba) {}
	void Show()const;
	
};

//pokerplayer
class PokerPlayer : virtual public Person {
public:
	int Draw();
	void Show()const;
};

class BadDude : public Gunslinger, public PokerPlayer {
public:
	double Gdraw() { return Gunslinger::Draw(); }
	int Cdraw() { return PokerPlayer::Draw(); }
	BadDude() :  Gunslinger(),PokerPlayer(){}
	void Show();
};

