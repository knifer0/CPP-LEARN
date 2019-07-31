#include <iostream>
#include <array>
int main(void){
	using namespace std;
	std::array<double,3>tab;
	for(int i=0; i<3;i++){
		cout <<"Wpisz " << i+1 << " probe sprintu: ";
		cin >> tab.at(i);
	}
	double suma{};
	for(int i=0; i<3; i++){
		cout << i+1 <<". " <<tab.at(i)<<endl;
		suma+=tab[i];
	}
	cout <<"srednia: " << suma/(double)3;
	return 0;
}
