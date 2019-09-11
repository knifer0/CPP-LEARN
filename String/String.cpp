#include "String.h"
#include <cstring>
#include <cctype>
#define _CRT_SECURE_NO_WARNINGS
int String::num_strings = 0;
String::String() {
	len = 1;
	str = new char[1];
	str[0] = '\0';
	num_strings++;
}

String::~String() {
	delete[] str;
	num_strings--;
}

String::String(const char *napis) {
	len = int (strlen(napis) + 1);
	str = new char[(int(len) + 1)];
	strcpy_s(str, len, napis);
	num_strings++;
}
// jest tworzony podczas tworzenia kopii obiektu String np przy przekazywaniu do funkcji, zwracaniu z funkcji wartosci czy w trakcie tworzenia obiektu
// z inicjalizacja np String napis = napis2; to wtedy
String::String(const String& st) { 
	len = int (strlen(st.str) + 1);
	str = new char[len + 1]; 
	strcpy_s(str, len, st.str);
	num_strings++;
}

ostream& operator<<(ostream& op, const String& st) {
	op << st.str;
	return op;
}

istream& operator>>(istream& is,  String& st) {
	char temp[String::CINLIM];
	is.get(temp, String::CINLIM-1);
	if(is)
		st = temp; // wykorzystanie operatora przypisania, ktory jest nizej!!!
	while(is && is.get() != '\n')
		continue;
	return is;
}
String& String::operator=(const char*napis) {
	delete[] str;
	len = int(strlen(napis) + 1);
	str = new char[len + 1];
	strcpy_s(str, len, napis);
	return *this;
}

char& String::operator[](int i) {
	return str[i];
}
// dostep do obiektow const!!
const char& String::operator[](int i) const {
	return str[i];
}

String& String::operator=(const String& st) {
	if (this == &st)
		return *this;
	delete[]str;
	len = int(strlen(st.str) + 1);
	str = new char[len + 1];
	strcpy_s(str, len, st.str);
	return *this;
}

int STRCMP(const String& s1, const String& s2) {
	int length_s1 = int(strlen(s1.str));
	int length_s2 = int(strlen(s2.str));
	for (int i = 0; i < length_s1; i++) {
		if (int(tolower(s1.str[i])) > int(tolower(s2.str[i])))
			return 1;
		else if (int(tolower(s1.str[i])) < int(tolower(s2.str[i])))
			return -1;
		else
			continue;
	}
	if (length_s1 == length_s2)
		return 0;
	else
		return 1;
}

bool operator<(const String& s1, const String& s2) {
	return STRCMP(s1, s2) < 0;
}

bool operator>(const String& s1, const String& s2) {
	return STRCMP(s1, s2) > 0;
}

bool operator==(const String& s1, const String& s2) {
	return STRCMP(s1, s2) == 0;
}
String String::operator+(const String& s1) {
	char temp[CINLIM];
	int length_1 = len - 1;
	strcpy_s(temp, len, str);
	strcat_s(temp, s1.str);
	return String(temp);
}

String operator+(const char *lan, const String& s2) {
	char temp[2*String::CINLIM];
	strcpy(temp, lan);
	strcat(temp, s2.str);
	return String(temp);
}


String& String::stringlow() {
	for (int i = 0; i < this->length(); i++) {
		this->str[i] = tolower(this->str[i]); // this jest niepotrzebny i tak xD
	}
	return *this;
}

String& String::stringup() {
	for (int i = 0; i < length(); i++)
		str[i] = toupper(str[i]);
	return *this;
}

int String::ile_wystapien(const char* lan) {
	int counter = 0;
	int i = 0;
	char* temp = str;
	while (*temp != '\0') {
		i = 0;
		while (*temp != *lan && *temp != '\0')
			temp++;
		while (*temp == lan[i] && *temp != '\0'){
			i++;
			temp++;
		}

		if (lan[i] == '\0')
			counter++;
	}
	return counter;
}