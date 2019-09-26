#include "klasy.h"
#include "ctime"
int main(){
	srand(time(NULL));
	Person obiekt1;
	Gunslinger obiekt2;
	PokerPlayer obiekt3;
	BadDude obiekt4;
	Person* wskaziniki[4] = { &obiekt1,&obiekt2,&obiekt3,&obiekt4 }; // obiekt4 error
	for (int i = 0; i < 4; i++) {
		wskaziniki[i]->Show();
		std::cout << std::endl;
	}
	return 0;
}
