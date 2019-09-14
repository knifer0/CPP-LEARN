#include "cd.h"
#include <cstring>
Cd::Cd(string s1, string s2, int n, double x) {
	performers = s1;
	label = s2;
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd& d) {
	performers = d.performers;
	label = d.label;
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	performers[0] = '\0';
	label[0] = '\0';
	selections = 0;
	playtime = 0.0;
}

void Cd::Report()const {
	std::cout << "Wykonawca: " << performers << std::endl;
	std::cout << "Etykieta: " << label << std::endl;
	std::cout << "Liczba utowrow: " << selections << std::endl;
	std::cout << "Dlugosc plyty[min]: " << playtime << std::endl << std::endl << std::endl;

}

Cd::~Cd() {
	//std::cout << "Hej";
}
Cd& Cd::operator=(const Cd& d) {
	if (this == &d)
		return *this;
	performers = d.performers;
	label = d.label;
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(string u, string s1, string s2, int n, double x) :Cd(s1, s2, n, x) {
	glowny_utwor = u;
}

void Classic::Report()const {
	std::cout << "Wykonawca: " << performers << std::endl;
	std::cout << "Etykieta: " << label << std::endl;
	std::cout << "Liczba utowrow: " << selections << std::endl;
	std::cout << "Dlugosc plyty[min]: " << playtime << std::endl;
	std::cout << "Glowny utwor na plycie: " << glowny_utwor << std::endl<<std::endl<<std::endl;
}

Classic& Classic::operator=(const Classic& d){
	if (this == &d)
		return *this;
	glowny_utwor = d.glowny_utwor;
	performers = d.performers;
	label = d.label;
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::~Classic() {
	//std::cout << "siemka";
}