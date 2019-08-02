#include <iostream>
#include <fstream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	std::ifstream plik;
	plik.open("wizytowka.txt");
	if(!(plik.is_open())){
		cout<<"Nie udalo sie otworzyc pliku";
		exit(EXIT_FAILURE);
	}
	char ch;
	int counter=0;
	plik.get(ch);//wazna linijka! good sprawdza dopiero po wczytaniu
	while(plik.good()){ // albo w warunku dac tylko plik.get(ch) i tyle wystarczy
		counter++;
		plik.get(ch);
	}
	if(plik.eof()){
		plik.close();
		cout<<"Plik zawiera " << counter <<" znakow"<<endl; 
	}
	else if(plik.fail()){
		cout <<"Wczytywanie danych przerwano - blad";
		exit(EXIT_FAILURE);
	}
	else{
		cout<<"Nie udalo sie przejsc do konca pliku - przyczyna nieznana";
		exit(EXIT_FAILURE);
	}
	return 0;
}
