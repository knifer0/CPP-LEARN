#include <iostream>
#include <string>
template <class T1, class T2>
class Pair {
private:
	T1 a;
	T2 b;
public:
	T1& first();
	T2& second();
	T1 first() const {return a; }
	T2 second()const { return b; }
	Pair(const T1 &aval, const T2 &bval):a(aval),b(bval){}
	Pair(){}
};

template <class T1, class T2>
T1& Pair<T1,T2>::first() {
	return a;
}

template <class T1, class T2>
T2& Pair<T1, T2>::second() {
	return b;
}
int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	Pair<string, int>ratings[4] = {
		Pair<string,int>("Pod czerwonym Baronem",5),
		Pair<string,int>("Szybko i tanio ",4),
		Pair<string,int>("Sulfer Magdy",5),
		Pair<string,int>("U ",3)
	};
	cout << sizeof(ratings) / sizeof(Pair<string, int>);
}

