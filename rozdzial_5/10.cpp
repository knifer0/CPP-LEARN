#include <iostream>
int main(void){
	using namespace std;
	int counter =5;
	for(int i=0; i<5; i++){
		for(int j=1; j<counter-i;j++)
			cout<<".";
		for(int z=0; z<=i; z++)
			cout<<"*";
		cout<<endl;
		
	}
	return 0;
}
