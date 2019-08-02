#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	int dochod;
	cout <<"Podaj twoj dochod: ";
	if(!(cin>>dochod) || dochod <0){
		cout<<"Podano wartosc nieliczbowa";
		exit(EXIT_FAILURE);
	}
	int podatek=0;
	double podatekA =0;
	double podatekB=0.10;
	double podatekC=0.15;
	double podatekD=0.20;
	if(dochod<=5000){
		podatek=0;
	}
	else if(dochod<=15000){
		podatek= (dochod-5000) * podatekB;
	}
	else if(dochod<=35000){
		podatek = 10000 * podatekB + (dochod - 15000) *podatekC;
	}
	else if(dochod>35000){
		podatek = 10000 *podatekB + 20000 *podatekC + (dochod - 35000) * podatekD; 
	}
	cout <<"NALEZNY PODATEK WYNOSI: ";
	cout <<podatek<<"twarpow ";
	return 0;
}
