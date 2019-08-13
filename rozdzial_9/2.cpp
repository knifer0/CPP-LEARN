#include <iostream>
#include <string> // do getline!!!!!!!!
void strcount(std::string &abc);
int main()
{
	using std::string;
	string nazwa;
	while (getline(std::cin, nazwa) && nazwa!="") {
		strcount(nazwa);
	}
}
void strcount(std::string& abc) {
	using std::cout;
	using std::endl;
	static int total = 0;
	cout << abc << " zawiera " << (int)abc.length() << " znakow" << endl;
	total += (int)abc.length();
	cout << "Lacznie " << total << " znakow" << endl;
}
