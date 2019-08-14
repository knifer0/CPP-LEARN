#pragma once
#ifndef STOS_H_
#define STOS_H_
class Stos{
private:
	enum { MAX = 10 };
	int stack[MAX];
	int top;
public:
	Stos();
	bool isempty() const;
	bool isfull() const;
	bool push(const int &value);
	bool pop(int& value);
	bool print(void);
};
void linia(void);
#endif
