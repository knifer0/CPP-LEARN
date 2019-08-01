#include <iostream>
int main(void){
	using namespace std;
	long double kwota_Cleo=100, kwota_Dafne=100;
	int licznik_lat=1;
	while(kwota_Cleo<=kwota_Dafne){
		kwota_Dafne+=10;
		kwota_Cleo+=kwota_Cleo*0.05;
		cout << "Po " << licznik_lat++ <<" roku: " "Dafne: "<<kwota_Dafne <<" Cleo: "<<kwota_Cleo<<endl;
	}
	return 0;
}
