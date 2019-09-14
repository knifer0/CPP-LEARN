#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <cstring>
class Port{
private:
	char* brand;
	char style[20];
	int bottles;
public:
	void ChangeBottles(const Port& p);
	void ChangeBrand(const Port& p);
	void ChangeStyle(const Port& p);
	Port(const char* br = "Brak", const char* st = "Brak", int b = 0);
	Port(const Port &p);//konstruktor kopiujacy
	virtual ~Port() {
		delete[] brand;
	}
	Port& operator=(const Port& p);
	Port& operator+=(int b);
	Port& operator+(int b);
	friend Port& operator+(int b, Port& p);
	Port& operator-=(int b);
	Port& operator-(int b);
	friend Port& operator-(int b, Port& p);
	const char* GetStyle()const {
		return style;
	}
	const char* GetBrand()const {
		return brand;
	}
	int BottleCount()const  {
		return bottles;
	}
	virtual void Show()const;
	friend std::ostream& operator<<(std::ostream& os, const Port& p);
};

class VintagePort :public Port {
private:
	char* nickname;
	int year;
public:
	VintagePort();
	VintagePort(const char* br, const char *st, int b, const char* nn, int y);
	VintagePort(const VintagePort& vp);
	~VintagePort() {
		delete[] nickname;
	}
	VintagePort& operator=(const VintagePort& vp);
	void Show()const;
	friend std::ostream& operator<<(std::ostream& os, const VintagePort& vp);
};

