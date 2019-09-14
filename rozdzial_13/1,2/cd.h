#include <iostream>
#include <string>
using std::string;
#define _CRT_SECURE_NO_WARNINGS
#pragma once
class Cd{
protected:
	string performers;
	string label;
	int selections;
	double playtime;
public:
	Cd(string s1="nothing", string s2="nothing", int n=0, double x=0.0);
	Cd(const Cd& d);
	Cd();
	~Cd();
	virtual void Report()const; // zastosowanie polimorfizmu, poznego wiazania dynamicznego
	Cd& operator=(const Cd& d);
	/* char* Performers(const Cd &pd) {
		return pd.performers;
	}
	char* Label() {
		return label;
	}
	int& Selections() {
		return selections;
	}
	double& Playtime() {
		return playtime;
	}*/
};

class Classic : public Cd {
private:
	string glowny_utwor;
public:
	Classic(string u="nothing", string s1 = "nothing", string s2 = "nothing", int n=0, double x=0.0);
	Classic& operator=(const Classic& d);
	virtual void Report()const;
	~Classic();
};
