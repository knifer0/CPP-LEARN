#pragma once
#include <array>
#ifndef STOS_H_
#define STOS_H_
struct customer {
	char fullname[35];
	double payment;
};
class Stos{
private:
	enum { MAX = 5 };
	std::array <customer, 6>stack;
	//customer stack[MAX];
	int top;
public:
	Stos();
	bool isempty() const;
	bool isfull() const;
	bool push(void);
	bool pop(void);
	bool print(void);
	int get_top() {
		return top;
	}
};
void linia(void);
#endif
