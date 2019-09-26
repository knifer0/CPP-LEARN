#pragma once
template <class T1, class T2>
class Pair {
private:
	T1 rocznik_wina;
	T2 liczba_butelek_rok;
public:
	T1& first();
	T2& second();
	T1 first() const { return rocznik_wina; }
	T2 second()const { return liczba_butelek_rok; }
	Pair(const T1& aval, const T2& bval) :rocznik_wina(aval), liczba_butelek_rok(bval) {}
	Pair() {}
};

template <class T1, class T2>
T1& Pair<T1, T2>::first() {
	return rocznik_wina;
}

template <class T1, class T2>
T2& Pair<T1, T2>::second() {
	return liczba_butelek_rok;
}