#include <iostream>
#include <string>
#include <ctime>
using std::string;
using std::cout;
using std::endl;
using std::cin;
// klasa Person

class Person {
private:
	string imie;
	string nazwisko;
public:
	Person(string i = "brak", string n = "brak") : imie(i), nazwisko(n) {}
	string GetImie()const { return imie; }
	string GetNazwisko()const { return nazwisko; }
	Person(const Person& p) : imie(p.imie), nazwisko(p.nazwisko) {} // konstruktor kopiujacy
	virtual void Show()const;
};
void Person::Show()const {
	cout << imie << endl;
	cout << nazwisko << endl;
}

//klasa Gunslinger
class Gunslinger : public Person {
private:
	int liczba_naciec;
	double czas;
public:
	Gunslinger(string i="brak", string n="brak", int ln=0, double c=0.0) : Person(i,n),liczba_naciec(ln),czas(c){}
	Gunslinger(const Person &p, int ln, double c):Person(p),liczba_naciec(ln),czas(c){}
	Gunslinger(const Gunslinger &g) : Person(g.GetImie(), g.GetNazwisko()),liczba_naciec(g.liczba_naciec),czas(g.czas){}
	double& Draw() { return czas; }	
	void Show()const;
};

void Gunslinger::Show() const {
	Person::Show();
	cout << "Liczba naciec na pistoleciku: " << liczba_naciec << endl;
	cout << "Czas wyciagniecia rewolweru: " << czas << endl;
}

// klasa PokerPlayer

class PokerPlayer : virtual public Person {
private:
public:
	int Draw()const {return rand() % 53 + 1;}
};

int main(){
	srand(time(NULL));
	Person z1;
	Gunslinger z2;
	Person* wsk[2] = { &z1, &z2 };
	for (int i = 0; i < 2; i++) {
		wsk[i]->Show();
		cout << endl;
	}
	
}


