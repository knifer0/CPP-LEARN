#include <iostream>
#include <array>
#include <vector>
using std::array;
using std::cout;
using std::cin;
using std::endl;
struct ryba{
	std::string rodzaj;
	unsigned int waga;
	double dlugosc;
};
int main(void){
/*	array<char,30> aktorzy;
	array<short,100> betsie;
	array<float,13> chuck;
	array<long double,64> dipsea;
	int t[5]={1,3,5,7,9};
	int even = *t + *(t+4);
	std:: cout <<even;
	char nazwa_tablicy[] = "cheesburger";
	const char *lan = "Waldorf Salad";
	ryba karp = {"miesozerna",34,55.23};
	enum Odpowiedz{Tak=1, Nie=0, Chyba=2};
	double ted =5.23;
	double *wsk = &ted;
	std::cout <<std::endl <<*wsk;
	float treacle[10] {};
	treacle[9]=11;
	float *wp = treacle; */
	
	// od 13 cw
	/*unsigned int ilosc;
	cout<<"Podaj dodatnia liczbe calkowita: ";
	cin>>ilosc;
	int *tab = new int [ilosc];
	std::vector <int> tab2(ilosc); */
	cout << (int*) "Dom wesolych bajtów"<<endl;//adres lancucha 
	ryba *wp = new ryba;
	wp->rodzaj="pstrag";
	wp->dlugosc=55.5;
	wp->waga=12;
	return 0;
}
