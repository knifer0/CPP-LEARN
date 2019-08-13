#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
struct Batonik {
	char mark[30];
	double weight;
	int calory_counter;
};
void load(Batonik& ref, const char* tab = "siema", double we = 2.85, int calo = 350);
void print(const Batonik& ref);
int main(void) {
	Batonik baton{};
	load(baton, "jas ", 13.0);
	print(baton);
	return 0;
}
void pokaz(const char* lan, int ile) {
	if (ile) {
		while (ile--)
			cout << lan << endl;
	}
	else
		cout << lan;
}
void load(Batonik& ref, const char* tab, double we, int calo) {
	strcpy(ref.mark, tab);
	ref.calory_counter = calo;
	ref.weight = we;
}
void print(const Batonik& ref) {
	cout << ref.mark << endl << ref.weight << endl << ref.calory_counter << endl;
}
