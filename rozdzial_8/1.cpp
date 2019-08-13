#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
void pokaz(const char *lan, int ile=0);
int main(void){
	pokaz("dupa");
	return 0;
}
void pokaz(const char *lan, int ile){
	if(ile){
		while(ile--)
			cout<<lan<<endl;
	}
	else
		cout <<lan;
}
