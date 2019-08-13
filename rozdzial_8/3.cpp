#include <iostream>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
using std::cout;
using std::cin;
using std::endl;
using std::string;
void zamien(string& name);
int main(void) {
	string nazwa;
	while (getline(cin, nazwa)) {
		zamien(nazwa);
		cout << nazwa << endl;
	}
	return 0;
}
void zamien(string& name) {
	for (int i = 0; i < name.length(); i++)
		name[i]=toupper(name[i]);
	//transform(nazwa.begin(), nazwa.end(), nazwa.begin(), ::toupper); / --->2 metoda
}
