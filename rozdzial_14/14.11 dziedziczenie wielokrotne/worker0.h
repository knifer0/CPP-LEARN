#pragma once
#include <string>
class Worker{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data() const;
	virtual void Get();
public:
	Worker():fullname("brak"),id(0L){}
	Worker(const std::string& s, long n) :fullname(s), id(n){}
	Worker(const Worker &w) : fullname(w.fullname),id(w.id){}
	virtual ~Worker() = 0;//destruktor czysto wirtualny
	virtual void Set();
	virtual void Show()const;
};

class Waiter : virtual public Worker {
private:
	int panache;
protected:
	void Data() const;
	void Get();
public:
	Waiter() : Worker(), panache(0) {}
	Waiter(const std::string& s, long n, int p = 0) : Worker(s, n), panache(p){}
	Waiter(const Worker& wk, int p = 0) : Worker(wk), panache(p){}
	void Set();
	void Show()const;
};

class Singer : virtual public Worker {
private:
	int voice;
protected:
	void Data() const;
	void Get();
public:
	Singer():Worker(),voice(0){}
	Singer(const std::string& s, long n, int v) : Worker(s, n), voice(v) {}
	Singer(const Worker &wk, int v) : Worker(wk),voice(v){}
	void Set();
	void Show() const;
};

// dziedziczenie wielokrotne

class SingingWaiter : public Singer, public Waiter {
protected:
	void Data() const;
	void Get();
public:
	SingingWaiter(){}
	SingingWaiter(const std::string &s, long n, int p =0,int v=0) : Worker(s,n),Waiter(s,n,p),Singer(s,n,v){}
	SingingWaiter(const Worker& wk, int p = 0, int v = 0) : Worker(wk), Waiter(wk, p), Singer(wk, v){}
	SingingWaiter(const Waiter &wt,int v =0):Worker(wt),Waiter(wt),Singer(wt,v){}
	SingingWaiter(const Singer &wt, int p=0):Worker(wt),Waiter(wt,p),Singer(wt){}
	void Set();
	void Show()const;
};