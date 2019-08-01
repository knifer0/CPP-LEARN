#include <iostream>
void linia(void){
	for(int i=0;i<40;i++)
		std::cout<<"-";
	std::cout<<std::endl;
}
int main(void){
	using namespace std;
	const string miesiace[12] = {"Styczen","Luty","Marzec","Kwiecien","Maj","Czerwiec","Lipiec","Sierpien","Wrzesien","Pazdziernik","Listopad","Grudzien"};
	int tablica_sprzedazy[3][12];
	int counter=0;
	int j=0;
	while(j<3){
		counter=0;
		cout<<"\t\t ROK "<<j+1<<endl;
		linia();
		for(string x:miesiace){
			cout<<"Podaj sprzedaz za "<<x<<": ";
			cin >>tablica_sprzedazy[j][counter];
			counter++;
		}
		j++;
	}
	cout <<tablica_sprzedazy[3];
	int suma=0,suma_za_wszystko=0;;
	j=0;
	while(j<3){
		suma=0;
		for(int x:tablica_sprzedazy[j]){
			suma_za_wszystko+=x;
			suma+=x;
		}
		cout<<"Suma za "<<j+1 <<" rok: " <<suma<<endl;
		j++;
	}
	cout <<endl<< "Laczna sprzedaz:" <<suma_za_wszystko <<"sztuk";
	return 0;
}
