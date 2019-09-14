#define _CRT_SECURE_NO_WARNINGS
#include "dma.h"
baseDMA::baseDMA(const char* l, int r) {
	label = new char [int(strlen(l)) + 1];
	strcpy(label, l);
	rating = r;
}

baseDMA::baseDMA(const baseDMA& rs) {
	label =new char[int(strlen(rs.label)) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
}

baseDMA::~baseDMA(){
	delete[] label;
}

baseDMA& baseDMA::operator=(const baseDMA& rs) {
	if (this == &rs)
		return *this;
	else
		delete[] label;
	label = new char[int(strlen(rs.label)) + 1];
	strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs) {
	os << "Etykietka: " << rs.label << std::endl;
	os << "Klasa: " << rs.rating << std::endl;
	return os;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) :baseDMA(l,r) {
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char* c, const baseDMA& rs): baseDMA(rs){
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& ls) {
	os << (const baseDMA&)ls;
	os << "Kolor: " << ls.color << std::endl;
	return os;
}

hasDMA::hasDMA(const char* s, const char* l, int r): baseDMA(l,r){
	style = new char[strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const char* s, const baseDMA& rs):baseDMA(rs) {
	style = new char[strlen(s) + 1];
	std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& hs) : baseDMA(hs) {
	style = new char[strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
}

hasDMA::~hasDMA() {
	//delete[] style; ~~~~~~~~ÊRROR
}

hasDMA& hasDMA::operator=(const hasDMA& rs){
	if (this == &rs)
		return *this;
	else
		baseDMA::operator=(rs);
		delete[] style;
	style = new char[strlen(rs.style + 1)];
	strcpy(style, rs.style);
	return *this;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& rs) {
	os << (const baseDMA&) rs;
	os << "Styl: "<<rs.style << std::endl;
	return os;
}