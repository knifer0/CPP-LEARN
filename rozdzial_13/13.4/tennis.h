#pragma once
#include <string>
#include <iostream>
using std::string;
class Tennis{
private:
	string firstname;
	string lastname;
	bool hasTable;
public:
	Tennis(const string& fn = "brak", const string& ln = "brak", bool ht = false);
	~Tennis() {
	//std::cout << "DELETING [TENNIS]\n";
	}
	void Name() const {
		std::cout << lastname << ", " << firstname;
	}
	bool HasTable()const { return hasTable; }
	void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public Tennis {
private:
	unsigned int rating;
public:
	RatedPlayer(unsigned int r = 0, const string & fn = "brak", const string & ln = "brak", bool ht = false); //1 konstruktor
	RatedPlayer(unsigned int r, const Tennis& t);
	unsigned int Rating()const { return rating; }
	void ResetRating(unsigned int r) {
		rating = r;
	}
};

class Proba {
private:
	int x;
	int y;
protected:
	int z;
	int q;
public:
	Proba(int xx = 0, int yy = 0, int zz = 0, int qq = 0) : x(xx), y(yy), z(zz), q(qq) {};
};

class Dziedzic : public Proba {
private:
	int cisza;
public:
	Dziedzic(int c = 0) : cisza(c), Proba() {};
};