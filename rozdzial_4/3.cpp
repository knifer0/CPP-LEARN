#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	string imie,nazwisko;
	cout<<"Podaj imie: ";
	getline(cin,imie);
	cout <<"Podaj nazwisko: ";
	getline(cin,nazwisko);
	char *tab = new char [imie.length()+nazwisko.length()+3];
	string tab2;
	tab2 = nazwisko+", "+imie;
	strcpy(tab,nazwisko.c_str());
	strcat(tab,", ");
	strcat(tab,imie.c_str());
	cout <<tab<<endl<<tab2;
	return 0;
}
