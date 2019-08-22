#pragma once
#include <iostream>
#ifndef GOLF_H_
#define GOLF_H_


const int Len = 40;
void linia(void);
class Golf {
private:
	char fullname[Len];
	int handicap;
public:
	Golf(std::string m_name = "brak", int m_handicap = 0);
	void setgolf(void);
	void handicap_upp(int hc);
	void showgolf() const;
};

//Golf(const char* name, int hc);

#endif GOLF_H_