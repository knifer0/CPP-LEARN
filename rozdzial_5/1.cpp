#include <iostream>
#include <array>
const int ArSize=100;
int main(void){
	using namespace std;
	unsigned int x,y;
	cout <<"Podaj dwie lizcby calkowite: ";
	cin>>x>>y;
	unsigned int suma=0;
	while(x<=y){
		suma+=x;
		x++;
	}
	cout <<"Suma: " <<suma<<endl;
	return 0;
}
