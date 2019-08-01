#include <iostream>
int main(void){
	using namespace std;
	int suma =0;
	int liczba;
	while(cin>>liczba != 0 && liczba!=0){
		suma+=liczba;
	}
	cout <<suma;
	return 0;
}
