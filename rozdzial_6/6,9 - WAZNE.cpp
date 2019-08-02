#include <iostream>
#include <cstdlib>
#include <fstream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int ilosc;
struct Donejt{
	string nazwisko;
	double kwota;
};
void linia(void){
	for(int i=0; i<40; i++)
		cout<<"-";
	cout<<endl;
}
void wypelnij(Donejt *t, int ile);
Donejt *wczytaj_z_pliku(void);
void dobry_donejt(Donejt *t, int ile);
void normalny_donejt(Donejt *t, int ile);
int main(void){
	wczytaj_z_pliku();
	Donejt *tab = wczytaj_z_pliku();
	cout<<"Nasi wspaniali sponsorzy: "<<endl;
	linia();
	dobry_donejt(tab,ilosc);
	cout<<endl<<endl<<endl;
	cout<<"Pozostali sponorzy: "<<endl;
	linia();
	normalny_donejt(tab,ilosc);
	delete [] tab;
	return 0;
}
void wypelnij(Donejt *t, int ile){
	cin.get();
	for(int i=0; i<ile;i++){
		cout<<"Podaj nazwisko: ";
		getline(cin,t->nazwisko);
		cout <<"Podaj kwote: ";
		cin>>t->kwota;
		cin.get();
		t++;
	}
}
void dobry_donejt(Donejt *t, int ile){
	for(int i=0; i<ile;i++){
		if(t->kwota>=10000){
			cout<<"Nazwisko: ";
			if(t->nazwisko.length()==0)
				cout<<"brak "<<endl;
			else
			cout<<t->nazwisko<<endl;
		}
	t++;
	}
}
void normalny_donejt(Donejt *t, int ile){
	for(int i=0; i<ile;i++){
		if(t->kwota<10000){
			cout<<"Nazwisko: ";
			if(t->nazwisko.length()==0)
				cout<<"brak "<<endl;
			else
			cout<<t->nazwisko<<endl;
		}
	t++;
	}
}
Donejt *wczytaj_z_pliku(void){
	std::ifstream plik;
	plik.open("inwestorzy.txt");
	if(!(plik.is_open())){
		cout<<"Nie udalo sie otworzyc pliku";
		exit(EXIT_FAILURE);
	}
	plik>>ilosc;
	plik.get();
	Donejt *tablica = new Donejt [ilosc]; // rezerwuje
	int counter=0;
	while(plik.good()){
		getline(plik,tablica[counter].nazwisko);
		plik>>tablica[counter].kwota;
		plik.get(); // bez tego nie dziala, bo mieszanie tekstu i liczb
		counter++;
	}
	if(plik.eof())
		return tablica;
	else if(plik.fail()){
		cout<<"Nie udalo sie dotrzec do konca pliku - blad";
		exit(EXIT_FAILURE);
	}
	else{
		cout<<"Nie udalo sie dotrzec do konca pliku - przyczyna nieznana";
		exit(EXIT_FAILURE);
	}
	//tutaj przydaloby sie przejsc na koniec pliku i sprawdzic ile ma danych, ale tego jeszcze nie potrafie	
}
