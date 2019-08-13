#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
const int ilosc = 5;
template <typename T>
T maks(T* t);
int main(void) {
	double tab[ilosc] = { 5.23,23.18,-22.1,13.0,12.0 };
	int tab2[ilosc] = { 1,2,7,3,4 };
	cout << maks(tab) << endl;
	cout << maks(tab2) << endl;
	return 0;

}
template <typename T>
T maks(T* t) {
	T maks_liczba = *t;
	t++;
	for (int i = 1; i < ilosc; i++) {
		if (*t > maks_liczba)
			maks_liczba = *t;
		t++;
	}
	return maks_liczba;
}
