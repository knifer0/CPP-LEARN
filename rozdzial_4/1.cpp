#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	string imie, nazwisko;
	int ocena, wiek;
	cout <<"Jak masz na imie? ";
	getline(cin,imie);
	cout <<"Jak sie nazwisko? ";
	getline(cin,nazwisko);
	cout <<"Na jaka ocene zaslugujesz? ";
	cin >> ocena;
	cout <<"Ile masz lat? ";
	cin >> wiek;
	cout<<"Nazwisko: " << nazwisko <<", " << imie<<endl;
	cout <<"Ocena: "<<--ocena<<endl;
	cout <<"Wiek: "<<wiek<<endl;
	return 0;
}
