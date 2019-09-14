#pragma once
#include <iostream>
class baseDMA {
private:
	char* label;
	int rating;
public:
	char* GetLabel() const { return label; }
	const int& GetRating() const { return rating; }
	baseDMA(const char* l = "brak", int r = 0);
	baseDMA(const baseDMA& rs);
	virtual void View()const =0; // klasa czysto abstrakcyjna - nie bedzie sie dalo utworzyc obiektu tego typu, jedynie wskaznik
	virtual ~baseDMA();
	baseDMA& operator=(const baseDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const baseDMA& rs);

};

class lacksDMA :public baseDMA {
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char* c = "brak", const char* l = "brak", int r = 0);
	lacksDMA(const char* c, const baseDMA& rs);
	~lacksDMA() {};
	friend std::ostream& operator<<(std::ostream& os, const lacksDMA& rs);
	void View()const;
};

class hasDMA :public baseDMA {
private:
	char* style;
public:
	hasDMA(const char* s = "brak", const char* l = "brak", int r = 0);
	hasDMA(const char* s, const baseDMA& rs);
	hasDMA(const hasDMA& hs);
	~hasDMA();
	void View()const;
	hasDMA& operator=(const hasDMA& rs);
	friend std::ostream& operator<<(std::ostream& os, const hasDMA& rs);
};