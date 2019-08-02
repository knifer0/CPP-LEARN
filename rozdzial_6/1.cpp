#include <iostream>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	char ch;
	char *tablica = new char [1000];
	int counter=0;
	while(cin.get(ch) && ch !='@'){
		if(ch>='0' && ch<='9')
			continue;
		else{
			tablica[counter] = ch;
			counter++;
		}
	}
	//cout <<tablica;
	for(int i=0; i<counter; i++){
		if(islower(tablica[i]))
			cout << (char)(toupper(tablica[i]));
		else if(isupper(tablica[i]))
			cout << (char)(tolower(tablica[i]));
		else
			cout <<tablica[i]; //to dla \n
	}
	
	delete [] tablica;
	return 0;
}
