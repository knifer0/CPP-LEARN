#pragma once
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
class AcctABC {
private:
	string fullName;
	long acctNum;
	double balance;
protected:
	const string& FullName() const { return fullName; }
	long AcctNum()const { return acctNum; }
public:
	AcctABC(const string& s = "brak", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt) = 0;//funkcja czysto wirtualna
	double Balance()const { return balance; }
	virtual void ViewAcct() const = 0;//funkcja czysto wirtualna
	virtual ~AcctABC() {}; //destruktor wirtualny
};

class Brass : public AcctABC{
public:
	Brass(const string& s = "brak", long an = -1, double bal = 0.0) :AcctABC(s, an, bal) {}
	virtual void Withdraw(double amt);
	virtual void ViewAcct() const;
	virtual ~Brass() {};
};


class BrassPlus : public AcctABC {
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const string& s = "brak", long an = -1, double bal = 0.0, double ml = 500, double r = 0.10);
	BrassPlus(const Brass& ba, double ml = 500, double r = 0.1);
	virtual void ViewAcct() const;
	virtual void Withdraw(double amt);
	void ResetMax(double m) {
		maxLoan = m;
	}
	void ResetRate(double r) {
		rate = r;
	}
	void ResetOwes(double o) {
		owesBank = o;
	}
};
