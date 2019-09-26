#pragma once
#include "pair.h"
#include <iostream>
#include <valarray>
typedef std::valarray<int> IntArray;
typedef Pair<IntArray, IntArray> PairArray;

class Wine {
private:
	int liczba_lat;
	std::string label;
	PairArray wina;//pierwsza przechowuje roczniki wina, druga liczbe posiadanych butelek danego rocznika
public:
	Wine() : liczba_lat(0), label("brak"), wina(IntArray(0), IntArray(0)) {}
	Wine(const char* l, int y, const int yr[], const int bot[]);
	Wine(const char* l, int y);
	void GetBottles();
	std::string& Label();
	int sum();
	void Show()const;
};