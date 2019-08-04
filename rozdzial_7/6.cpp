#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int fill_array(double *t, int size);
void show_array(double *t, int size);
void reverse_array(double *t, int size);
int main(void){
	double *table = new double [100] {};
	int rozmiar = fill_array(table,100);
	show_array(table,rozmiar);
	reverse_array(table,rozmiar);
	cout<<endl;
	show_array(table,rozmiar);
	delete [] table;
	return 0;
}
int fill_array(double *t, int size){
	double temp;
	char ch;
	for(int i=0;i<size;i++){
		cin >>temp;
		if(!cin){
			cin.clear();
			while((ch = cin.get()) != '\n')
				continue;
			return i;
		}
		else
			t[i] = temp;
	}
}
void show_array(double *t, int size){
	for(int i=0; i<size;i++){
		cout<<t[i]<<endl;
	}
}
void reverse_array(double *t, int size){
	double *p1 = t;
	double *p2 = &t[size-1];
	while(p1<p2){
		std::swap(*p1,*p2);
		p1++;
		p2--;
	}
}
