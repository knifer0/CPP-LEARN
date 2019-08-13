#include <iostream>
struct chaff {
	char dross[20];
	int slag;
};
char* bufor = new char[2*sizeof(chaff)+2];
int main(void) {
	
	using std::cout;
	using std::cin;
	using std::endl;
	std::string nazwa = "ladnie ladnie";
	chaff* p2 = new (bufor) chaff [2];
	strcpy_s(p2[0].dross,20,nazwa.c_str()); // w visual studio dziala, bo jest problem  z strcpy_s i strcpy
	p2[0].slag = 22;
	std::string nazwa2 = "brzydko brzydko";
	strcpy_s(p2[1].dross, 20, nazwa2.c_str());
	p2[1].slag = 69;
	for (int i = 0; i < 2; i++) {
		cout << p2[i].dross << "\t" << p2[i].slag << endl;
	}
	chaff* p3 = new (bufor) chaff[2];
	p3[0].slag = 88;
	p3[1].slag = 890;
	for (int i = 0; i < 2; i++) {
		cout << p2[i].dross << "\t" << p2[i].slag << endl;
	}

	//delete[] p2; // tego robic nie mozna, bo pamiec miejscowa new jest przydzielona statycznie, dzieki temu mozemy sobie zrobic jeszcze jeden 
	// wskaznik na to samo miejsce w buforze i on zamaze dane wczeniejszego
	return 0;
}
