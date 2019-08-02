#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;
const int strsize = 100;
struct zpdw{
	char imie[strsize];
	char stanowisko[strsize];
	char pseudozpdw[strsize];
	int preferencje;
};
int main(void){
	zpdw tab[5]= {
		{"Jan","sprzatacz","koza",15},
		{"Wojtek","Kierownik","knifer0",20},
		{"Marcin","Pijak","zolw",7},
		{"Amadeusz","Alkoholik","Amandzia",2},
		{"Przemek","Mechanik","dupa wolowa",1},
	};
	char wybor;
	while(1){
		cout<<"a. lista wg imion";
		cout<<"\tb. lista wg stanowisk"<<endl;
		cout<<"c. lista wg pseudonimow";
		cout<<"\td. lista wg preferencji"<<endl;
		cout <<"q. koniec"<<endl;
		cin>>wybor;
		switch(wybor){
			case 'a':
				// wszedzie tutaj bedzie znajdowac sie zwykle wyswietlanie danych, tego nie robie too easy
				break;
			case 'b':
			
				break;
			case 'c':
			
				break;
			case 'd':
			
				break;
			case 'q':
				exit(EXIT_SUCCESS);
			default:
				cout <<"Wprowadz poprawny znak."<<endl;
				continue;
		}
	}
	return 0;
}
