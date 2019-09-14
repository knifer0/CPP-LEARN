#include "brass.h"
AcctABC::AcctABC(const string& s, long an, double bal) {
	fullName = s;
	acctNum = an;
	balance = bal;
}

void AcctABC::Deposit(double amt) {
	if (amt < 0)
		cout << "Nie mozna wplacic ujemnej kwoty\n";
	else
		balance += amt;
}
void AcctABC::Withdraw(double amt) {
	balance -= amt;
}
void Brass::Withdraw(double amt) {
	if (amt < 0)
		cout << "Nie mozna wyplacic ujemnej kwoty\n";
	else if (amt <= Balance())
		AcctABC::Withdraw(amt);
	else
		cout << "Zadana suma przekacza srodki\n";
}


void Brass::ViewAcct()const {
	cout << "Klient: " << FullName() << endl;
	cout << "Numer rachunku: " << AcctNum() << endl;
	cout << "Stan konta: " << Balance() << " zl" << endl;
}

BrassPlus::BrassPlus(const Brass& ba, double ml, double r) : AcctABC(ba) {
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

BrassPlus::BrassPlus(const string& s, long an, double bal, double ml, double r) :AcctABC(s,an,bal) {
	maxLoan = ml;
	owesBank = 0.0;
	rate = r;
}

void BrassPlus::ViewAcct()const {
	cout << "Wlasciel rachunku BrassPlus: " << FullName() << endl;
	cout << "Numer rachunku: " << AcctNum() << endl;
	cout << "Stan konta: " << Balance() << endl;
	cout << "Limit debetu: " << maxLoan << " zl " << endl;
	cout << "Kwota zadluzenia: " << owesBank << " zl " << endl;
	cout << "Stopa oprocentowania: " << 100*rate << "%" << endl;
}

void BrassPlus::Withdraw(double amt) {
	double bal = Balance();
	if (amt <= bal)
		AcctABC::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank) {
		double advance = amt - bal;
		owesBank += advance * (1.0 + rate);
		cout << "Zadluzenie faktyczne: " << advance << " zl" << endl;
		cout << "Odsetki: " << advance*rate << " zl" << endl;
		Deposit(advance);
		AcctABC::Withdraw(amt);
	}
	else {
		cout << "Przekroczony limit debetu. Operacja anulowana\n";
	}
}
