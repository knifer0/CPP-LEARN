#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring> //dla strlen strcpy
#include <cstdlib>
struct stringy {
	char* str;
	int ct;
};
using std::cout;
using std::cin;
using std::string;
using std::endl;
void set(stringy& ref, const char* lan);
void show(const stringy& ref, int ile = 0);
void show(const char* lan, int ile = 0);
void linia(void) {
	for (int i = 0; i < 40; i++)
		cout << "-";
	cout << endl;
}
int main(void) {
	stringy beany;
	char testing[] = "Rzeczywistosc to juz nie to, co kiedys.";
	set(beany, testing);
	show(beany);
	linia();
	show(beany, 2);
	linia();
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	linia();
	show(testing, 3);
	linia();
	show("Gotowe");
	return 0;
}
void set(stringy& ref, const char* lan) {
	ref.str = new char[strlen(lan) + 1];
	strcpy(ref.str, lan);
	ref.ct = (int)strlen(ref.str);
}

void show(const stringy& ref, int ile) {
	if (ile > 0)
		while (ile--) {
			cout << ref.str << endl;
		}
	else
		cout << ref.str << endl;
}

void show(const char* lan, int ile) {
	if (ile > 0)
		while (ile--) {
			cout << lan << endl;
		}
	else
		cout << lan << endl;
}
