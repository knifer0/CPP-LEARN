#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using namespace std;
int main(void){
	const char *lan = "gotowe";
	char tab[100];
	int counter=0;
	while( cin>> tab && (strcmp(tab,lan)) !=0)
		counter++;
	cout<<endl<<counter<<endl;
	//zad 9
	string tab2;
	counter=0;
	while(cin >> tab2 && tab2!=lan)
		counter++;
	cout<<endl<<counter<<endl;
	return 0;
}
