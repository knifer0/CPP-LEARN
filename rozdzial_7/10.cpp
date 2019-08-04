#include <iostream>
#include <cstdlib>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::string;

inline double add(double x, double y){
	return x+y;
}
inline double odj(double x, double y){
	return x-y;
}
double calculate(double a, double b, double (*wsk)(double , double )){
	wsk = add;
	return wsk(a,b);
}
int main(void){
	double q = calculate(2.5, 10.4, add);
	cout <<q;
	return 0;
}
