#include <iostream>
#include <array>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	std::array <double,10> tab;
	int counter=0;
	double temp;
	for(double &x: tab){ 
		cout<<"tab["<<counter<<"] = ";
		if(!(cin >> temp)){
			cout  <<"Podano wartosc nieliczbowa,  bye";
			exit(EXIT_FAILURE);
		}
		x=temp;
		counter++;
	}
	double srednia =0;
	double suma=0;
	for(double x :tab){
		suma+=x;
	}
	srednia = suma/(double)10;
	cout<<"TWOJA SREDNIA WYNOSI: "<<srednia<<endl;
	for(double x:tab){
		if(x>srednia)
			cout<<x<<endl;
	}
	return 0;
}
