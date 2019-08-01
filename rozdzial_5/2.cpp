#include <iostream>
#include <array>
const int ArSize=101;
int main(void){
	using namespace std;
	array<long double,101> tab;
	tab[0]=tab[1]=1;
	for(int i=2; i<ArSize;i++)
		tab[i] = i*tab[i-1];
	int counter=0;
	for(long double x:tab){
		cout<<counter<<"! = " << x<<endl;
		counter++;
	}
	return 0;
}
