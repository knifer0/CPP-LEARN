#include <iostream>
#include <cstdlib>
#include <cctype>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main(void){
	char samogloski[] = {'a','e','i','o','u','y'};
	char spolgloski[] = {'b','c','d','f','g','h','j','k','l','m','n','p','r','s','t','w','z','x','v','q'};
	int inne=0,samo=0,spol=0,zmiana=0;;
	string slowo;
	while(cin >> slowo &&slowo[0] !='q'){
		zmiana =0;
		if(isalpha(slowo[0])){
			if(isupper(slowo[0]))
				tolower(slowo[0]);
			for(char x: samogloski){
				if(x==slowo[0]){
					zmiana=1;
					samo++;
					break;
				}
			}
			if(!zmiana) // wykonuj tylko, jesli nie znaleziono samogloski
				for(char x: spolgloski){
					if(x==slowo[0]){
						spol++;
						break;
					}
				}
		}
		else
			inne++;
	}
	cout<<spol<<" slow zaczynajacych sie od spolglosek"<<endl;
	cout<<samo<<" slow zaczynajacych sie od samoglosek"<<endl;
	cout<<inne<" innych slow";
	return 0;
}
