#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct car{
	string marka;
	unsigned int rok_budowy;
};
void wczytaj_dane(car *wsk, int ile);
void wyswietl_dane(car *wsk, int ile);
int main(void){
	int ilosc;
	cout <<"Ile samochodow chcesz skatalogowac? ";
	cin>>ilosc;
	car *fabryka = new car [ilosc];
	wczytaj_dane(fabryka,ilosc);
	wyswietl_dane(fabryka,ilosc);
	return 0;
}
void wczytaj_dane(car *wsk, int ile){
	cin.get();
	for(int i=0;i<ile;i++){
		cout<<"Samochod #"<<i+1<<":"<<endl;
		cout<<"Prosze podac marke: ";
		getline(cin,wsk->marka);
		cout<<"Rok produkcji: ";
		cin>>wsk->rok_budowy;
		cin.get();
		wsk++;
	}
}
void wyswietl_dane(car *wsk, int ile){
	for(int i=0; i<ile; i++){
		cout<<wsk->rok_budowy <<" " <<wsk->marka<<endl;
		wsk++;
	}
}
