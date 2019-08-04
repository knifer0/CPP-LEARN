#include <iostream>
#include <cstdlib>
#include <cstring>
using std::cout;
using std::endl;
using std::cin;
using std::string;
const int SLEN = 30;
struct student{
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel;
};
int getinfo(student *p, int size);
void display1(student st);
void display2(student *ps);
void display3(student *pa, int size);
int main(void){
	cout <<"Podaj wielkosc grupy: ";
	int class_size;
	cin>>class_size;
	while(cin.get() !='\n')
		continue;
	student *ptr_stu = new student [class_size];
	int entered = getinfo(ptr_stu,class_size);
	for(int i=0; i<entered; i++){
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu,entered);
	delete [] ptr_stu;
	cout <<"Gotowe\n";
	return 0;
}
int getinfo(student *p, int size){
	char temp[SLEN];
	int counter=0;
	for(int i=0; i<size;i++){
		cout <<"Podaj nazwisko: ";
		cin.getline(temp,SLEN);
		if(strlen(temp) ==0)
			return counter;
	
		strcpy(p->fullname,temp);
		cout <<"Podaj hobby: ";
		cin.getline(p->hobby,SLEN);
		cout <<"Podaj swoj level: ";
		while(!(cin>>p->ooplevel)){
			if(!cin){
				cin.clear();
				while(cin.get() !='\n')
					continue;
			cout <<"musisz podac wartosc numeryczna: ";	
			}
		}
		cin.get();
		counter++;
		p++;
	}
	return counter;
}
void display1(student st){
	cout<<st.fullname << " " << st.hobby <<" " <<st.ooplevel<<endl;
}
void display2(student *ps){
	cout<<ps->fullname<<" "<<ps->hobby<<" "<<ps->ooplevel<<endl;
}
void display3(student *pa, int size){
	for(int i=0; i<size;i++){
		cout<<pa->fullname<<" "<<pa->hobby<<" "<<pa->ooplevel<<endl;
		pa++;
	}
}
