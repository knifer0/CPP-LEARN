#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct Pizza{
	string nazwa;
	double srednica,waga;
};
void dodaj_pizze(Pizza *t, unsigned int ile);
void wyswietl_pizze(Pizza *t, unsigned int ile);
int main(void){
	unsigned int ilosc;
	cout <<"Ile chcesz pizz dodac? ";
	cin >>ilosc;
	cin.get();
	Pizza *tab = new Pizza [ilosc];
	dodaj_pizze(tab,ilosc);
	wyswietl_pizze(tab,ilosc);
	delete [] tab;
	return 0;
}
void dodaj_pizze(Pizza *t, unsigned int ile){
	for(int i=0; i<ile;i++){
		cout << "Podaj srednice pizzy: ";
		cin >> t->srednica;
		cin.get();
		cout << "Podaj nazwe pizzy: ";
		getline(cin,t->nazwa);
		cout << "Podaj wage pizzy: ";
		cin >> t->waga; 
		cin.get();
		t++;
	}
}
void wyswietl_pizze(Pizza *t, unsigned int ile){
	for(int i=0; i<ile; i++){
		cout <<"Nazwa: " <<t->nazwa <<", " << "srednica: "<<t->srednica <<", " << "waga: " << t->waga<<endl;
		t++;
	}
}
