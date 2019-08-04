#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::string;
inline double fun(int n){
	if(n==0)
		return 1;
	else if(n==1)
		return 1;
	else
		return n*fun(n-1);
}
int main(void){
	int liczba;
	cout<<"Podaj liczbe, ja wylicze srednia: "<<endl;
	while(cin>>liczba && liczba>=0){
		if(!cin)
			break;
		cout<<liczba<<"! = "<<fun(liczba)<<endl;
	cout <<"Podak kolejna: "<<endl;
	}
	return 0;
}
