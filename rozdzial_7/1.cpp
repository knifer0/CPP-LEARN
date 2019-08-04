#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::string;
inline double fun(int a,int b){
	return 2.0*a*b/(double(a+b));
}
int main(void){
	int x,y;
	while(cin>>x>>y && x!=0 || y!=0){
		if(!cin)
			break;
		cout<<"Srednia harmoniczna = "<<fun(x,y)<<endl;
	}
	return 0;
}
