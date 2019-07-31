#include <iostream>
#include <cstring>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct Batonik{
	string marka;
	double waga;
	unsigned int liczba_kalorii;
};
void wyswietl(Batonik *ciastko){
	cout <<"Nazwa: "<<ciastko->marka<<endl;
	cout <<"Waga: "<<ciastko->waga<<endl;
	cout <<"Liczba kalorii: "<<ciastko->liczba_kalorii<<endl;
}
int main(void){
	Batonik snack={"Kinder Bueno",0.35,215};
	Batonik *ciastka = new Batonik [3];
	ciastka[0]= snack;
	ciastka[1] = {"Mocha Munch",2.3,350};
	ciastka[2] = {"Papierosy",1.5,450};
	for(int i=0; i<3; i++)
		wyswietl(&ciastka[i]);
	delete [] ciastka;
	return 0;
}
