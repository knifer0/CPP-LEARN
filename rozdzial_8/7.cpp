#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
T maks(T *a, int rozmiar) {
	T maks = *a;
	for(int i=1; i<rozmiar; i++){
		a++;
		if(*a > maks)
			maks = *a;
	}
	return maks;
}
template <typename T>
char *maks (char **a, int rozmiar){
	cout<<"dasasdas"; // przeci¹¿enie szablonu
	char*b = *a;
	for(int i=1; i<rozmiar; i++){
		a++;
		if((int)strlen(*a) > (int)strlen(b))
			b = *a;
	}
	return b;
}
template <>
string maks (string *a, int rozmiar){ // specjalizacja szablonu dla string
	string maks = *a;
	for(int i=1; i<rozmiar; i++){
		a++;
		if((int)a->length() > (int)maks.length())
			maks = *a;
	}
	return maks;
}
int main(void){
	char a[30] = "x";
	char b[30] = "makotaaaaaa";
	char c[30] = "ala";
	char d[30] = "makota";
	char e[30] = "ala";
	char f[30] = "makota";
	char* gg[6] = {a,b,c,d,e,f};
	int t[6] = {1,2,3,66,3,4};
	printf("%p",maks<char>(gg,6));
	cout<<endl<<maks<char>(gg,6)<<endl;
	string tablica[5] = {"wojtekkkkkk","marcin","amadeusz","przemek","miki"};
	cout<<maks<string>(tablica,5);
	return 0;
}
